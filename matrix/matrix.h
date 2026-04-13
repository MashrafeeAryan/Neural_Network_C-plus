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

    //Since matrix is 1D, to access the values you need to do data[1* m.cols +2] to access index
    //However, this does the same without the indexing manualy
    
    //Gives reference for functions to write it
    double& operator()(int r, int c);

    //Only used for reading. That's why using const. Can't be modified
    double operator()(int r, int c) const;

    // declaring function; It will fill matrix with random numbers
    void randomize();

};