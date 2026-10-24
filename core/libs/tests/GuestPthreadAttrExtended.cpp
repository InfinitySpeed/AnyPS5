#include "prx/libkernel/Pthread/include/Pthread.hpp"
#include <algorithm>
#include <array>
#include <cstring>
#include <cerrno>
#include <cstdio>
#include <cstdlib>

extern "C" {
int APS5_VABI pthread_attr_getaffinity_np_nid_postfix(const PthreadAttr*, std::size_t, void*);
int APS5_VABI pthread_attr_setaffinity_np_nid_postfix(PthreadAttr*, std::size_t, const void*);
int APS5_VABI scePthreadAttrSetaffinity(PthreadAttr*, KernelCpumask);

int APS5_VABI pthread_attr_init_nid_postfix(PthreadAttr*);
int APS5_VABI pthread_attr_destroy_nid_postfix(PthreadAttr*);
int APS5_VABI pthread_attr_setstacksize_nid_postfix(PthreadAttr*, std::size_t);
int APS5_VABI pthread_attr_setstackaddr_nid_postfix(PthreadAttr*, void*);
int APS5_VABI pthread_attr_getstack_nid_postfix(const PthreadAttr*, void**, std::size_t*);
}

namespace {

void Require(bool condition, int line) {
    if (!condition) {
        std::fprintf(stderr, "Thread attribute check failed at line %d\n", line);
        std::abort();
    }
}

}

#define Check(value) Require((value), __LINE__)

void TestStackAddress() {
    char first[2]{};
    char second[2]{};
    PthreadAttr attr = nullptr;
    Check(pthread_attr_init_nid_postfix(&attr) == 0);
    Check(pthread_attr_setstacksize_nid_postfix(&attr, 65536) == 0);
    const auto guard = attr->_guardsize;
    const auto priority = attr->_schedpriority;
    PthreadAttr empty = nullptr;
    errno = 71;
    Check(pthread_attr_setstackaddr_nid_postfix(nullptr, second) == 22);
    Check(pthread_attr_setstackaddr_nid_postfix(&empty, second) == 22);
    Check(empty == nullptr);
    Check(pthread_attr_setstackaddr_nid_postfix(&attr, nullptr) == 22);
    Check(attr->stackAddress == nullptr);
    Check(errno == 71);
    for (void* address : {static_cast<void*>(second), static_cast<void*>(second + 1), static_cast<void*>(first)}) {
        Check(pthread_attr_setstackaddr_nid_postfix(&attr, address) == 0);
        void* actual = nullptr;
        std::size_t size = 0;
        Check(pthread_attr_getstack_nid_postfix(&attr, &actual, &size) == 0);
        Check(actual == address && size == 65536);
        Check(attr->_guardsize == guard && attr->_schedpriority == priority);
        Check(errno == 71);
        Check(pthread_attr_setstackaddr_nid_postfix(&attr, nullptr) == 22);
        Check(attr->stackAddress == address && attr->_stacksize == 65536);
    }
    Check(pthread_attr_destroy_nid_postfix(&attr) == 0 && attr == nullptr);
    Check(pthread_attr_setstackaddr_nid_postfix(&attr, first) == 22);
    Check(attr == nullptr && errno == 71);
}

void TestAffinity() {
    PthreadAttr attr = nullptr;
    PthreadAttr empty = nullptr;
    Check(pthread_attr_init_nid_postfix(&attr) == 0);
    std::array<unsigned char, 40> actual{};
    std::array<unsigned char, 40> expected{};
    std::fill_n(expected.begin(), 32, 0xff);
    errno = 71;
    Check(pthread_attr_getaffinity_np_nid_postfix(&attr, actual.size(), actual.data()) == 0);
    Check(actual == expected);
    Check(pthread_attr_getaffinity_np_nid_postfix(nullptr, 0, nullptr) == 22);
    Check(pthread_attr_getaffinity_np_nid_postfix(&empty, 40, actual.data()) == 22);
    Check(pthread_attr_setaffinity_np_nid_postfix(nullptr, 0, nullptr) == 22);
    Check(pthread_attr_setaffinity_np_nid_postfix(&empty, 0, nullptr) == 22);
    actual.fill(0xa5);
    Check(pthread_attr_getaffinity_np_nid_postfix(&attr, 31, actual.data()) == 34);
    Check(std::all_of(actual.begin(), actual.end(), [](unsigned char value) { return value == 0xa5; }));
    Check(pthread_attr_getaffinity_np_nid_postfix(&attr, 31, nullptr) == 34);
    Check(pthread_attr_getaffinity_np_nid_postfix(&attr, 32, nullptr) == 14);
    expected.fill(0);
    for (std::size_t index = 0; index < 32; ++index) expected[index] = static_cast<unsigned char>(index * 7 + 1);
    Check(pthread_attr_setaffinity_np_nid_postfix(&attr, expected.size(), expected.data()) == 0);
    actual.fill(0xa5);
    Check(pthread_attr_getaffinity_np_nid_postfix(&attr, actual.size(), actual.data()) == 0 && actual == expected);
    actual.fill(0xa5);
    Check(pthread_attr_getaffinity_np_nid_postfix(&attr, 32, actual.data()) == 0);
    Check(std::memcmp(actual.data(), expected.data(), 32) == 0);
    Check(std::all_of(actual.begin() + 32, actual.end(), [](unsigned char value) { return value == 0xa5; }));
    auto invalid = expected;
    invalid[32] = 1;
    Check(pthread_attr_setaffinity_np_nid_postfix(&attr, invalid.size(), invalid.data()) == 22);
    Check(pthread_attr_setaffinity_np_nid_postfix(&attr, 31, invalid.data()) == 34);
    Check(pthread_attr_getaffinity_np_nid_postfix(&attr, actual.size(), actual.data()) == 0 && actual == expected);
    Check(scePthreadAttrSetaffinity(&attr, 5) == 0);
    expected.fill(0);
    expected[0] = 5;
    Check(pthread_attr_getaffinity_np_nid_postfix(&attr, actual.size(), actual.data()) == 0 && actual == expected);
    Check(pthread_attr_setaffinity_np_nid_postfix(&attr, 0, actual.data()) == 0);
    std::fill_n(expected.begin(), 32, 0xff);
    Check(pthread_attr_getaffinity_np_nid_postfix(&attr, actual.size(), actual.data()) == 0 && actual == expected);
    actual.fill(0);
    Check(pthread_attr_setaffinity_np_nid_postfix(&attr, 32, actual.data()) == 0);
    Check(pthread_attr_getaffinity_np_nid_postfix(&attr, actual.size(), actual.data()) == 0);
    Check(std::all_of(actual.begin(), actual.end(), [](unsigned char value) { return value == 0; }));
    Check(pthread_attr_setaffinity_np_nid_postfix(&attr, 1, nullptr) == 0);
    Check(pthread_attr_getaffinity_np_nid_postfix(&attr, actual.size(), actual.data()) == 0 && actual == expected);
    Check(errno == 71);
    Check(pthread_attr_destroy_nid_postfix(&attr) == 0);
    Check(pthread_attr_getaffinity_np_nid_postfix(&attr, 40, actual.data()) == 22);
    Check(pthread_attr_setaffinity_np_nid_postfix(&attr, 0, nullptr) == 22);
}

int main() {
    TestStackAddress();
    TestAffinity();
}
