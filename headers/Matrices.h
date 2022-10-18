#pragma once
#include <iostream>


typedef double T;

class Matrix{
    //Artributes of a matrix
    private:
    int row;
    int col;
    int elements;
    T** data;

    public:
    //Constructor,logging and gets
    Matrix(int row,int col,const T* inputData);
    void matrixShow();
    T matrixGetData(const int m,const int n);
    int matrixGetRow();
    int matrixGetCol();
    int matrixGetSize();

    //Matrix operations
};

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