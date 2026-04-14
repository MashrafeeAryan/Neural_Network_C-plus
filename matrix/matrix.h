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

    //For matrix multiplication
    // Matrix at the start is the return type of the function which is a custom type
    // We use const Matrix& because we don't want to change the input and const helps with that
        // Matrix means a type heere
        // The & is a reference that refers to the original matrix input
        // Instead of making a copy we refer it and it will be faster because matrixes can get huge
        // Copying it is not time efficient
        //input_name is the variable that has matrix reference
    
    //Const in parameter says do not change the matrix that we are passing
    //Const at the end says do not change the object calling the function
        //EX: A.multiply(B). Both A and B should not be modified
    Matrix multiply(const Matrix& input_matrix) const; 
    //For Matrix addition
    Matrix add(const Matrix& input_matrix) const;

    Matrix transpose() const;
    //FOr multiplication between matrix:
    // number of columsn of A = number of rows of B
};