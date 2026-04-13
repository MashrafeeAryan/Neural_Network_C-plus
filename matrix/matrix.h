#pragma once //tells compiler to include this header file only once
#include <vector>

class Matrix {

public: 
    //stores matrix dimensions
    int rows, cols; // initilize rows and columns variables

    //stores matrix values in 1D array
    std::vector<double> data; // creates a vector of data 

    //Constructor declaration
    Matrix(int r, int c);

    //Notes to myself
    //operator() overloads a function
        // same function name but different behavior depending on inputs
    double&

}