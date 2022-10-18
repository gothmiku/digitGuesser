#include <iostream>
#include "Matrices.h"

//test

int main(){
    const double A[9]={1.2,1.5,6.9,3.1,1.86,12.54,23.1,1.111,2.1957};

    Matrix *example = new Matrix(3,3,A);
    example->matrixShow();
    std::cout << example->matrixGetRow();

    return 0;
}