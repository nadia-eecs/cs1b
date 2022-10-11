#ifndef _MATRIX_H
#define _MATRIX_H
#include <fstream>
#include <string>
using namespace std;

void fileIO(string filename, double A[][n], int m, double B[][n2], int m2);

void matrixAddition(double A[][n1], int m1, double B[][n1], int m2);

void matrixSubtraction(double A[][n1], int m1, double B[][n1], int m2);

void matrixMultiplication(double A[][n1], int m1, double B[][n1], int m2);

double matrixDeterminant(double M[][n], int m);

#endif
