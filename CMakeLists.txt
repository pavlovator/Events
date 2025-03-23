cmake_minimum_required(VERSION 3.10)

project(rMap)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SOURCES main.cpp)

find_package(raylib REQUIRED)

include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(rmap ${SOURCES})

target_link_libraries(rmap raylib GL m pthread dl rt X11)
