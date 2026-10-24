#include "SceTypes.hpp"
#include <array>
#include <barrier>
#include <thread>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <source_location>

extern "C" {
int* APS5_VABI __error_nid_postfix();
int APS5_VABI getlogin_r_nid_postfix(char*, int);
char* APS5_VABI getlogin_nid_postfix();
char* APS5_VABI getcwd_nid_postfix(char*, std::size_t);
int APS5_VABI __getcwd_nid_postfix(char*, std::size_t);
}

namespace {

void Require(bool value, std::source_location location = std::source_location::current()) {
    if (!value) {
        std::fprintf(stderr, "Kernel utility check failed at line %u, errno=%d\n", location.line(), *__error_nid_postfix());
        std::abort();
    }
}

void Login() {
    std::array<char, 33> expected{};
    const int result = getlogin_r_nid_postfix(expected.data(), static_cast<int>(expected.size()));
    *__error_nid_postfix() = 71;
    if (result == 0 && expected[0] != '\0') {
        std::barrier start(8);
        std::vector<std::thread> workers;
        for (int index = 0; index < 8; ++index) workers.emplace_back([&] {
            *__error_nid_postfix() = 71;
            start.arrive_and_wait();
            for (int call = 0; call < 32; ++call) {
                const char* value = getlogin_nid_postfix();
                Require(value && std::strcmp(value, expected.data()) == 0);
                Require(*__error_nid_postfix() == 71);
            }
        });
        for (auto& worker : workers) worker.join();
    }
    char* actual = getlogin_nid_postfix();
    if (result != 0) {
        Require(actual == nullptr && *__error_nid_postfix() == result);
    } else if (expected[0] == '\0') {
        Require(actual == nullptr);
    } else {
        Require(actual != nullptr && std::strcmp(actual, expected.data()) == 0);
        Require(*__error_nid_postfix() == 71);
        Require(getlogin_nid_postfix() == actual);
        Require(std::strcmp(actual, expected.data()) == 0);
    }
}

void Cwd() {
    std::array<char, 4096> expected{};
    Require(getcwd_nid_postfix(expected.data(), expected.size()) == expected.data());
    std::array<char, 4096> actual;
    actual.fill('#');
    *__error_nid_postfix() = 71;
    Require(__getcwd_nid_postfix(actual.data(), actual.size()) == 0);
    Require(std::strcmp(actual.data(), expected.data()) == 0);
    Require(actual[std::strlen(expected.data()) + 1] == '#');
    Require(*__error_nid_postfix() == 71);
    std::array<char, 1> shortBuffer{'#'};
    Require(__getcwd_nid_postfix(shortBuffer.data(), shortBuffer.size()) == -1 && *__error_nid_postfix() == 34);
    Require(shortBuffer[0] == '#');
    Require(__getcwd_nid_postfix(actual.data(), 0) == -1 && *__error_nid_postfix() == 22);
    Require(__getcwd_nid_postfix(nullptr, actual.size()) == -1 && *__error_nid_postfix() == 14);
}

}

int main(int argc, char** argv) {
    Require(argc == 2);
    if (std::strcmp(argv[1], "login") == 0) Login();
    else if (std::strcmp(argv[1], "cwd") == 0) Cwd();
    else std::abort();
}
