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

Matrix add(Matrix A, Matrix B){
    Matrix* result = new Matrix(A.matrixGetRow(),A.matrixGetCol(),createNullArray(A.matrixGetRow(),A.matrixGetCol()));
    if(dimensionCheck(A,B)){
        for(int m=0;m<A.matrixGetRow();m++){
            for(int n=0;n<A.matrixGetCol();n++){
                result->data[m][n]=A.matrixGetData(m,n)+B.matrixGetData(m,n);
            }
        }
    }
}

Matrix substract(Matrix A, Matrix B){
    Matrix* result = new Matrix(A.matrixGetRow(),A.matrixGetCol(),createNullArray(A.matrixGetRow(),A.matrixGetCol()));
    if(dimensionCheck(A,B)){
        for(int m=0;m<A.matrixGetRow();m++){
            for(int n=0;n<A.matrixGetCol();n++){
                result->data[m][n]=A.matrixGetData(m,n)-B.matrixGetData(m,n);
            }
        }
    }
}

Matrix multiply(Matrix A,Matrix B){
    //i forgot how we multiplied
}

Matrix transpose(Matrix A){
    //i forgot how to transpose
}

Matrix addScalar(Matrix A,const T scaValue){
    //will do
}

Matrix scale(Matrix A,const T scaValue){
    //will do
}

Matrix dotProd(Matrix A,Matrix B){
    
}