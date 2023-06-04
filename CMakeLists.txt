cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
project(cmake_cookbook LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

set(USE_LIBRARY ON)

message(STATUS "Compile sources into a library? ${USE_LIBRARY}")

set(BUILD_SHARED_LIBS OFF)

list(APPEND _sources include/Message.h include/Message.cpp include/utils.h include/swap.h)

if(USE_LIBRARY)
    add_library(message ${_sources})
    add_executable(hello-world src/hello-world.cpp)
    target_link_libraries(hello-world message)
else()
    add_executable(hello-world src/hello-world.cpp ${_sources})
endif()