cmake_minimum_required( VERSION 3.10.2 )

set( CMAKE_CXX_FLAGS "-std=c++17" )

project(hello08)

include_directories(
${PROJECT_SOURCE_DIR}/src/includes 
)

set(SRC 
${PROJECT_SOURCE_DIR}/src/utils/circulararea.cpp
${PROJECT_SOURCE_DIR}/src/circle.cpp
)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

add_executable(${PROJECT_NAME} ${SRC})

target_link_libraries(${PROJECT_NAME} m)