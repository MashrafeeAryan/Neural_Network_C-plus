#Creat ethe matrix library
# Compiles matrix.cpp into a resuable module called matrix
add_library(
    matrix
    matrix.cpp

)

# Tells CMake where to find headers in the folders
target_include_directories(matrix PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})