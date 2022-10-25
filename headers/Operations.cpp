#include <iostream>
#include "Matrices.h"
#include "Operations.h"

bool dimensionCheck(Matrix A,Matrix B){
    if(A.matrixGetRow()==B.matrixGetRow()&&A.matrixGetCol()==B.matrixGetCol()){
        return true;
    }
    else{
        std::cout << "Matrix dimensions mismatching.";
        return false;
    }
 }

Matrix* add(Matrix A, Matrix B){
    Matrix* result = new Matrix(A.matrixGetRow(),A.matrixGetCol(),createNullArray(A.matrixGetSize()));
    if(dimensionCheck(A,B)){
        for(int m=0;m<A.matrixGetRow();m++){
            for(int n=0;n<A.matrixGetCol();n++){
                result->data[m][n]=A.matrixGetData(m,n)+B.matrixGetData(m,n);
            }
        }
    }
    return result;
}

Matrix* substract(Matrix A, Matrix B){
    Matrix* result = new Matrix(A.matrixGetRow(),A.matrixGetCol(),createNullArray(A.matrixGetSize()));
    if(dimensionCheck(A,B)){
        for(int m=0;m<A.matrixGetRow();m++){
            for(int n=0;n<A.matrixGetCol();n++){
                result->data[m][n]=A.matrixGetData(m,n)-B.matrixGetData(m,n);
            }
        }
    }
    return result;
}


Matrix* addScalar(Matrix A,const T scaValue){
    Matrix* result = new Matrix(A.matrixGetRow(),A.matrixGetCol(),A.matrixGetDataArray());
    for(int m=0;m<A.matrixGetRow();m++){
        for(int n=0;n<A.matrixGetCol();n++){
            result->data[m][n]=A.data[m][n]+scaValue;
        }
    }
    return result;
}

Matrix* scale(Matrix A,const T scaValue){
    Matrix* result = new Matrix(A.matrixGetRow(),A.matrixGetCol(),A.matrixGetDataArray());
    for(int m=0;m<A.matrixGetRow();m++){
        for(int n=0;n<A.matrixGetCol();n++){
            result->data[m][n]=A.data[m][n]*scaValue;
        }
    }
    return result;
}
/*
Matrix dotProd(Matrix A,Matrix B){
    //i will do
}
Matrix multiply(Matrix A,Matrix B){
    //i forgot how we multiplied
}

Matrix transpose(Matrix A){
    //i forgot how to transpose
}
*/