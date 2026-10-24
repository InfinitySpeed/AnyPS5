#include "SceTypes.hpp"
#include "prx/libkernel/File/include/DescriptorControl.hpp"
#include "prx/libkernel/File/include/FileFlags.hpp"
#include <chrono>
#include <cstdlib>
#include <filesystem>
#include <string>

extern "C" {
int APS5_VABI open_nid_postfix(const char*, int, int);
int APS5_VABI dup_nid_postfix(int);
int APS5_VABI close_nid_postfix(int);
}

void Require(bool value) { if (!value) std::abort(); }

int main() {
    const auto path = "descriptor-metadata-" + std::to_string(std::chrono::steady_clock::now().time_since_epoch().count());
    const int file = open_nid_postfix(path.c_str(), SCE_KERNEL_O_RDWR | SCE_KERNEL_O_CREAT | SCE_KERNEL_O_TRUNC, 0600);
    Require(file >= 0);
    Require(!File::HasFixedSizeWrites(file));
    File::RememberDescriptor(file, SCE_KERNEL_O_RDWR, true);
    Require(File::HasFixedSizeWrites(file));
    const int duplicate = dup_nid_postfix(file);
    Require(duplicate >= 0 && File::HasFixedSizeWrites(duplicate));
    File::RememberDescriptor(file, SCE_KERNEL_O_RDWR);
    Require(!File::HasFixedSizeWrites(file) && File::HasFixedSizeWrites(duplicate));
    Require(close_nid_postfix(file) == 0);
    Require(!File::HasFixedSizeWrites(file) && File::HasFixedSizeWrites(duplicate));
    Require(close_nid_postfix(duplicate) == 0 && !File::HasFixedSizeWrites(duplicate));
    Require(std::filesystem::remove(path));
}
