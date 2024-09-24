cmake_minimum_required(VERSION 3.22.1)

message(PROJECT_SOURCE_DIR="${PROJECT_SOURCE_DIR}")
message(CMAKE_SOURCE_DIR="${CMAKE_SOURCE_DIR}")
message(CMAKE_CURRENT_SOURCE_DIR="${CMAKE_CURRENT_SOURCE_DIR}")
message(PROJECT_BINARY_DIR="${PROJECT_BINARY_DIR}")

set(CMAKE_C_COMPILER "/usr/bin/gcc")
set(CMAKE_CXX_COMPILER "/usr/bin/g++")

project(HelloWorld)

add_executable(HelloWorld hello-world.cpp)

