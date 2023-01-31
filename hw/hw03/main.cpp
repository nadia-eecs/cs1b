#include <iostream>
#include "src/matrix.h"
using namespace std;

int main() {
  string filename;
  int A[AR_CAP][AR_CAP], B[AR_CAP][AR_CAP];
  int n1, m1, n2, m2;

  cout << "Please enter the name of the input file: ";
  getline(cin, filename);

  fileIO(filename, A, n1, m1, B, n2, m2);
  print2DMatrix(A, n1, m1);
  cout << endl;
  print2DMatrix(B, n2, m2);
  // Matrix Addition
  int res[m1][AR_CAP];
  matrixAddition(A, n1, m1, B, n2, m2, res);
  cout << "Matrix Addition of A and B result in: " << endl;
  print2DMatrix(res, n1, m1);

  // Matrix Subtraction
  matrixSubtraction(A, n1, m1, B, n2, m2, res);
  cout << "Matrix Subtraction of A and B result in: " << endl;
  print2DMatrix(res, n1, m1);

  // Matrix Multiplication
  int multres[AR_CAP][AR_CAP] = {0};
  matrixMultiplication(A, n1, m1, B, n2, m2, multres);
  cout << "Matrix Multiplication of A and B result in: " << endl;
  print2DMatrix(multres, n2, m2);

  // Matrix Transpose
  int trans[AR_CAP][AR_CAP];
  matrixTranspose(A, n1, m1, trans);
  cout << "Matrix Transpose of A is: ";
  print2DMatrix(trans, n1, m1);

  // Matrix Determinant 3D
  double det;
  det = matrixDeterminant3D(A, n1, m1);
  cout << "Matrix Determinant of A is: " << det << endl;
  
  return 0;
}
