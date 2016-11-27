cmake_minimum_required (VERSION 2.6)
 
project (LinkLibraries_Test)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")

# To make folders in project
#set(FLYWEIGHT
#    Flyweight/Flyweight.cpp
#    Flyweight/Flyweight.hpp
#)
#source_group("Geometry" FILES ${GEOMETRY})

if(MSVC)
  set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} /MTd")
  set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_DEBUG} /MTd")
endif()

add_subdirectory(LinkingLibraries)
include_directories(LinkingLibraries)

add_executable(${PROJECT_NAME} main.cpp)
add_dependencies(${PROJECT_NAME} Library1 Library2)
target_link_libraries(${PROJECT_NAME} Library1 Library2)