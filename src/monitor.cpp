// monitor.cpp — part of roblox-fps-tool.

#include "robloxfpstool/monitor.h"

#include <cstdio>

namespace robloxfpstool {

Monitor::Monitor(const std::string& config_path)
    : config_path_(config_path) {}

void Monitor::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Monitor::run() {
    if (verbose_) std::fprintf(stderr, "[roblox-fps-tool] monitor: run\n");
    // core logic lives here
    return true;
}

}  // namespace robloxfpstool
