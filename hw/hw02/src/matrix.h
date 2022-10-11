#ifndef _MATRIX_H
#define _MATRIX_H
#include <fstream>
#include <string>
using namespace std;

void fileIO(string filename, double A[][n1], int m1, double B[][n2], int m2);

void matrixAddition(const double A[][n1], int m1, const double B[][n2], int m2, const double res[][n1]);

void matrixSubtraction(double A[][n1], int m1, double B[][n2], res[][n1], double m2);

void matrixMultiplication(double A[][n1], int m1, double B[][n2], int m2, double res[][n2]);

void matrixTranspose(double M[][n], int m, double res[][m]); 

double matrixDeterminant3D(double M[][n], int m);

#endif
