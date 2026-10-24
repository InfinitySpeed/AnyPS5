#include "prx/libc/include/general/VabiMacros.hpp"
#include <mutex>

extern "C" {
int* APS5_VABI __error_nid_postfix();
int APS5_VABI getlogin_r_nid_postfix(char*, int);
}

extern "C" char* APS5_VABI getlogin_nid_postfix() {
    static std::mutex mutex;
    static char name[33]{};
    static bool loaded = false;
    std::lock_guard lock(mutex);
    if (!loaded) {
        const int result = getlogin_r_nid_postfix(name, static_cast<int>(sizeof(name)));
        if (result != 0) {
            *__error_nid_postfix() = result;
            return nullptr;
        }
        loaded = true;
    }
    return name[0] == '\0' ? nullptr : name;
}
