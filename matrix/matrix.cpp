//Imports from matrix header
#include "matrix.h"
//includes standard c library utilities
//such as rand()
#include <cstdlib>

//Define constructor for Matrix Class
//we are initializing with the values rather reassigning them
//initializing is faster
//data(r*c) creates vector with the right size
Matrix::Matrix(int r, int c): rows(r), cols(c), data(r*c) {};

//returns a reference of a specifc row and column you want to go to
//The reference allows you to edit
double& Matrix::operator()(int r, int c){
    //allows to use index in simple way
    //converts (row, col) -> 1D index
    return data[r * cols + c];
}

// Returns a copy so you can't modify it. Read-only
double Matrix::operator()(int r, int c) const {
    return data[r * cols + c];
}

//Define randomize function
void Matrix::randomize(){
    //auto& x compiler figures out the type
    //& allows it to me modified as well
    for (auto& x: data) {
        //RAND_MAX a constant integer from cstdlib
        //rand() gives a random integer
        //we prefer decimal values for ML that's why dividing
        // taking a random number and dividing by random number max
            //Gives 0.0 -> 1.0 
            // * 2 -1 makes the range -1 to 1
        x = ((double) rand()/ RAND_MAX) * 2 -1;


    }

    //Implementing multiply function for matrix mutliplication
    
}

//Multiplication of matrix
//Instead of copying the argument passed, it just refers to it and names it other
//Then they make sure other is const and it does not allow changes to other.
// Last const makes sure, there are no changes to the 
Matrix Matrix::multiply(const Matrix& other) const {
    //Create a result matrix
    //Rows of first x columns of second
    Matrix result(rows, other.cols);

    // Let's us go row by row
    for (int i = 0; i < rows; i++){
        for (int j =0; j < other.cols; j++){
            double sum = 0;
            for (int k =0; k< cols; k++){
                //row of first matrix × column of second matrix
                sum += (*this)(i, k) * other(k, j);
            }
            result(i, j) = sum;
        }
    }
    return result;
};


//Matrix addition
Matrix Matrix::add(const Matrix &other) const{
    //using (i, j) I can use different indexes
    //Current object is object A, so it will be results
    Matrix results(rows, cols);
    double sum = 0;
    for(int i = 0; i< rows; i++){
        for (int j = 0; j< cols; j++){
            sum = (*this)(i,j) + (other)(i,j);
            results(i, j) = sum;

        }
    }

}