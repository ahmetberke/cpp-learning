cmake_minimum_required(VERSION 3.5.1)
project(main)
add_library(tools lib/tools.hpp lib/tools.cpp)
set(CMAKE_CXX_STANDART 17)
add_executable(main main.cpp)
target_link_libraries(main PRIVATE tools)

