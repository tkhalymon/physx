cmake_minimum_required (VERSION 3.1)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB_RECURSE LIBRARY_SOURCES "src/*.cpp")

find_package(OpenGL REQUIRED)
find_package(Threads REQUIRED)

include_directories(${OPENGL_INCLUDE_DIRS} "include/" "src/include/")
add_library(physx SHARED ${LIBRARY_SOURCES})
add_library(physx.a STATIC ${LIBRARY_SOURCES})
