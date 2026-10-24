#include "prx/libkernel/Pthread/include/Pthread.hpp"
#include <cerrno>
#include <cstdio>
#include <cstdlib>

extern "C" {
int APS5_VABI pthread_attr_init_nid_postfix(PthreadAttr*);
int APS5_VABI pthread_attr_destroy_nid_postfix(PthreadAttr*);
int APS5_VABI pthread_attr_setstacksize_nid_postfix(PthreadAttr*, std::size_t);
int APS5_VABI pthread_attr_setstackaddr_nid_postfix(PthreadAttr*, void*);
int APS5_VABI pthread_attr_getstack_nid_postfix(const PthreadAttr*, void**, std::size_t*);
}

namespace {

void Require(bool condition, int line) {
    if (!condition) {
        std::fprintf(stderr, "Stack address check failed at line %d\n", line);
        std::abort();
    }
}

}

#define Check(value) Require((value), __LINE__)

int main() {
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
