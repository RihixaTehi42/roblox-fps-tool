cmake_minimum_required(VERSION 3.16)
project(roblox-fps-tool CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(robloxfpstool
    src/main.cpp
    src/unlocker.cpp
    src/profiles.cpp
    src/monitor.cpp
)

target_include_directories(robloxfpstool PRIVATE include)

if(WIN32)
    target_link_libraries(robloxfpstool PRIVATE userenv)
endif()
