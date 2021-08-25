set(BINARY ${CMAKE_PROJECT_NAME})

include_directories(
${PROJECT_SOURCE_DIR}/src/includes 
)

file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true *.h *.cpp)

set(SOURCES ${SOURCES})

add_executable(${BINARY}_run ${SOURCES})

add_library(${BINARY}_lib STATIC ${SOURCES})