cmake_minimum_required(VERSION 3.10.2)
project(hello09)

include_directories(src)

add_subdirectory(src)
add_subdirectory(tests)
add_subdirectory(lib/googletest)