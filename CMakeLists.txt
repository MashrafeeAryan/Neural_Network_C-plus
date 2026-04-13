# Minimum CMake version
cmake_minimum_required(VERSION 3.10)

# Project name
project(NeuralNetwork)

# Use C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add matrix module
add_subdirectory(matrix)

# Build executable
#Compiles the file and creates a runnable program called nn
# Run it like ./nn
add_executable(nn src/main.cpp)

# Link matrix library
target_link_libraries(nn matrix)

