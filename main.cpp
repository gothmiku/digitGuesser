#include <iostream>
#include "headers/Matrices.h"
#include "headers/Operations.h"

int main(){
    T input[9] = {1.2,1.421,1.32,1.2,1.421,1.32,1.2,1.421,3.111};
    Matrix* test = new Matrix(3,3,input);
    test = scale(*test,5);
    test->matrixShow();
    system("pause");
    return 0;
}