// main.cpp — entry point. Wires config and subsystems together.

#include "robloxfpstool/settings.h"
#include "robloxfpstool/unlocker.h"
#include "robloxfpstool/profiles.h"
#include "robloxfpstool/monitor.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    robloxfpstool::Settings settings = robloxfpstool::Settings::load_default();
    robloxfpstool::Unlocker unlocker(settings.store_path);
    robloxfpstool::Profiles profiles(settings.store_path);
    robloxfpstool::Monitor monitor(settings.store_path);
    std::fprintf(stderr, "[roblox-fps-tool] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
