cmake_minimum_required(VERSION 3.0)
project(sdl2_probe)

add_executable(sdl2_probe main.cpp)
find_package(SDL2 REQUIRED)

if (MSVC)
	set_target_properties(${PROJECT_NAME} PROPERTIES LINK_FLAGS /SUBSYSTEM:CONSOLE)	# CONSOLE or WINDOWS
	target_link_libraries(sdl2_probe PRIVATE SDL2::SDL2 SDL2::SDL2main)
else()
	include_directories(${SDL2_INCLUDE_DIRS})
	target_link_libraries(sdl2_probe PRIVATE ${SDL2_LIBRARIES})
endif()
