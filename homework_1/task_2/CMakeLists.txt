cmake_minimum_required(VERSION 3.5.1)
project(main)
add_subdirectory(./include)
set(SET_CXX_STANDART 17)
add_executable(main ./src/main.cpp)
target_link_libraries(main PRIVATE ipb_arithmetic)

install(TARGETS main DESTINATION bin)
install(FILES ./include/ipb_arithmetic/sum.hpp ./include/ipb_arithmetic/subtract.hpp DESTINATION include)
