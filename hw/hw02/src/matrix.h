#ifndef _MATRIX_H
#define _MATRIX_H
#include <fstream>
#include <iostream>
#include <string>
#define AR_CAP 50

using namespace std;

void fileIO(string filename, int A[][AR_CAP], int& n1, int& m1, int B[][AR_CAP], int& n2, int& m2);

void matrixAddition(const int A[][AR_CAP], int n1, int m1, const int B[][AR_CAP], int n2, int m2, int res[][AR_CAP]);

void matrixSubtraction(int A[][AR_CAP], int n1, int m1, int B[][AR_CAP], int n2, int m2, int res[][AR_CAP]);

void matrixMultiplication(int A[][AR_CAP], int n1, int m1, int B[][AR_CAP], int n2, int m2, int res[][AR_CAP]);

void matrixTranspose(int M[][AR_CAP], int n, int m, int res[][AR_CAP]); 

double matrixDeterminant3D(int M[][AR_CAP], int n, int m);

void print2DMatrix(const int M[][AR_CAP], int n1, int m1);

#endif
