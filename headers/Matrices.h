#pragma once
#include <iostream>

//we will make the data of the matrice a double but we can change it to anything we want in the future
typedef double T;

class Matrix{
    //Artributes of a matrix
    private:
    int row;
    int col;
    int elements;
    

    public:
    //Constructor,logging and gets
    T** data;
    Matrix(int row,int col,const T* inputData);
    void matrixShow();
    T matrixGetData(const int m,const int n);
    int matrixGetRow();
    int matrixGetCol();
    int matrixGetSize();
    //Matrix operator+(Matrix& A);
    //Matrix gets and sets
};

T* createNullArray(const int a,const int b);
/*
int* createNullArray(const int a,const int b);

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
*/

/*
Matrix Matrix:: operator+(Matrix& A){
    Matrix* result = new Matrix(A.matrixGetRow(),A.matrixGetRow(),nullptr);
    for(int i=result->matrixGetRow();0<i;i++){
        for(int j=result->matrixGetCol();0<j;j++){
            result->data[i][j]=A.data[i][j]+this->data[i][j];
        }
    }
    return *result;
}
*/