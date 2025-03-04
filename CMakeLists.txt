cmake_minimum_required(VERSION 3.10)

project(Events)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SOURCES main.cpp)

find_package(nlohmann_json 3.11.3 REQUIRED)
find_package(raylib REQUIRED)

include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(events ${SOURCES})

target_link_libraries(events  PRIVATE nlohmann_json::nlohmann_json raylib GL m pthread dl rt X11)
