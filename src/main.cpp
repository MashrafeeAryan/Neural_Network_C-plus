#include <iostream>
#include "matrix/matrix.h"

int main(){
    std:: cout << "Neural Network in C+++ " << std::endl;


    //Test if matrix is working:
    //row=2
    //col=2
    Matrix m(2,2);
    //fills matrix with numbers between -1.0 to 1.0
    m.randomize();

    //print out the four values
    std::cout << m(0,0) << " " << m(0,1) << std::endl;
    std::cout << m(1,0) << " " << m(1,1) << std::endl;
    
    
}