#include <iostream>
#include "Matrices.h"

//test
int* createNullArray(const int a,const int b){
    int* result = new int[a*b];
    return result;
}

int Matrix::matrixGetSize(){
    return elements;
}

int Matrix::matrixGetCol(){
    return col;
}

int Matrix::matrixGetRow(){
    return row;
}

//constructor of the class
Matrix::Matrix(const int row,const int col,const T* inputData){
    elements=row*col;
    this->row=row;
    this->col=col;
    data = new T*[row];
    for(int i=0;i<row;i++){
        data[i]=new T[col];
    }
    int counter= 0;
    counter =0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            data[i][j]=inputData[counter];
            counter++;
        }
    }
}

//it shows the matrix in its own dimensional form
void Matrix::matrixShow(){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            std::cout<<data[i][j]<< "  ";
        }
        std::cout<<"\n";
    }
}

//gets the data of the matrix by using integers for parameters
T Matrix::matrixGetData(const int m,const int n){
    return data[m][n];
}

int main(){
    double A[9]={1.2,1.5,6.9,3.1,1.86,12.54,23.1,1.111,2.1957};
    double* B=new double[9];
    for(int i=0;i<9;i++){
        B[i]=A[i]*2;
    }

    Matrix *example = new Matrix(3,3,A);
    Matrix *example2 = new Matrix(3,3,B);
    example->matrixShow();
    std::cout << example->matrixGetRow();

    return 0;
}
