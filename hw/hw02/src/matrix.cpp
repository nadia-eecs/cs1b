#include "matrix.h"

void fileIO(string filename, double A[][n1], int m1, double B[][n2], int m2) {
	ifstream ifile;
	ifile.open(filename);
	while (!ifile.eof()) {
	       ifile >> n1 >> m1;
		for (int i = 0; i < n1; ++i) {
			for (int j = 0; j < m1; ++ j) {
				ifile >> A[i][j]; 
			}
		}
		ifile >> n2 >> m2;
		for (int i = 0; i < n2; ++i) {
			for (int j = 0; j < m2; ++ j) {
				ifile >> B[i][j]; 
			}
		}
	}
}

void matrixAddition(const double& A[][n1], int m1, const double& B[][n2], int m2, const double& res[][n1]) {
  // matrix addition is defined if and only if A and B have the same size
  if (n1 != n2 && m1 != m2) return;
  for (int i = 0; i < m1; ++i) {
    for (int j = 0; j < n1; ++i) {
      res[i][j] = A[i][j] + B[i][j];
    }
  }
}

void matrixSubtraction(double A[][n1], int m1, double B[][n2], int m2) {
  // matrix subtraction is defined if and only if A and B have the same size
  if (n1 != n2 && m1 != m2) return;
  for (int i = 0; i < m1; ++i) {
    for (int j = 0; j < n1; ++i) {
      res[i][j] = A[i][j] - B[i][j];
    }
  }
}

void matrixMultiplication(double A[][n1], int m1, double B[][n2], int m2, double res[][n2]) {
  // matrix multiplication is defined if and only if the number columns
  // of A is the same as the number of rows of B.
  if (n1 != m2) return;
  for (int i = 0; i < n1; ++i) {
    for (int j = 0; j < m2; ++j) {
      for (int k = 0; k < n2; ++k) {
        res[i][j] += A[i][k] * B[k][j];
      }
    }
  }
}


double matrixDeterminant(double M[][n], int m);
