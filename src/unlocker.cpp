// unlocker.cpp — part of roblox-fps-tool.

#include "robloxfpstool/unlocker.h"

#include <cstdio>

namespace robloxfpstool {

Unlocker::Unlocker(const std::string& config_path)
    : config_path_(config_path) {}

void Unlocker::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Unlocker::run() {
    if (verbose_) std::fprintf(stderr, "[roblox-fps-tool] unlocker: run\n");
    // core logic lives here
    return true;
}

}  // namespace robloxfpstool
