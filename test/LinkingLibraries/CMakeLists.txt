cmake_minimum_required (VERSION 2.6)
 
project (LinkLibraries)

add_subdirectory(src)
add_subdirectory(src2)
include_directories(.)

add_executable(${PROJECT_NAME} main.cpp)
add_dependencies(${PROJECT_NAME} Library1 Library2)
target_link_libraries(${PROJECT_NAME} Library1 Library2)