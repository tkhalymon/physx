cmake_minimum_required (VERSION 3.1)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB_RECURSE LIBRARY_SOURCES "src/*.cpp")

find_package(OpenGL REQUIRED)
find_package(Threads REQUIRED)

include_directories(${OPENGL_INCLUDE_DIRS} "include/" "src/include/")
add_library(physx SHARED ${LIBRARY_SOURCES})
add_library(physx.a STATIC ${LIBRARY_SOURCES})

file(GLOB_RECURSE TEST_SOURCES "test/*.cpp")
add_executable(physx_test ${TEST_SOURCES})
target_link_libraries(physx_test ${OPENGL_LIBRARIES} physx ${CMAKE_THREAD_LIBS_INIT})
