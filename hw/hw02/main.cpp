#include <iostream>
#include "src/matrix.h"
#define AR_CAP 50
using namespace std;

int main() {
  string filename;
  double A[AR_CAP][AR_CAP], B[AR_CAP][AR_CAP];
  int n1, m1, n2, m2;

  cout << "Please enter the name of the input file: ";
  getline(cin, filename);

  fileIO(filename, A, m1, B, m2);
  
  // Matrix Addition
  double res[m1][n1];
  matrixAddition(A, m1, B, m2, res);
  cout << "Matrix Addition of A and B result in: ";
  print2DMatrix(res, m1);

  // Matrix Subtraction
  matrixSubtraction(A, m1, B, m2, res);
  cout << "Matrix Subtraction of A and B result in: ";
  print2DMatrix(res, m1);

  // Matrix Multiplication
  double multres[n1][n2];
  matrixMultiplication(A, m1, B, m2, multres);
  cout << "Matrix Multiplication of A and B result in: ";
  print2DMatrix(multres, n2);

  // Matrix Transpose
  double trans[m1, n1];
  matrixTranspose(A, m1, trans);
  cout << "Matrix Transpose of A is: ";
  print2DMatrix(trans, n1);

  // Matrix Determinant 3D
  double det;
  det = matrixDeterminant3D(A, m1);
  cout << "Matrix Determinant of A is: " << det << endl;

  return 0;
}
