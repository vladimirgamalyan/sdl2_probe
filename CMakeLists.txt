cmake_minimum_required(VERSION 3.0)
project(sdl2_probe)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

add_executable(sdl2_probe main.cpp)
target_link_libraries(sdl2_probe ${SDL2_LIBRARIES})

