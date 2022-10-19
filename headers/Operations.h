#include <iostream>
#include "Matrices.h"
#pragma once

bool dimensionCheck(Matrix A,Matrix B);
Matrix add(Matrix A, Matrix B);
Matrix substract(Matrix A, Matrix B);
Matrix multiply(Matrix A,Matrix B);
Matrix transpose(Matrix A);
Matrix addScalar(Matrix A,const T scaValue);
Matrix scale(Matrix A,const T scaValue);