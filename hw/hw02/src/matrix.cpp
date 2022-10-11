#include "matrix.h"

void fileIO(string filename, double A[][n1], int& m1, double B[][n2], int& m2) {
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

void matrixAddition(const double A[][n1], int m1, const double B[][n2], int m2, const double res[][n1]) {
  // matrix addition is defined if and only if A and B have the same size
  if (n1 != n2 && m1 != m2) return;
  for (int i = 0; i < m1; ++i) {
    for (int j = 0; j < n1; ++i) {
      res[i][j] = A[i][j] + B[i][j];
    }
  }
}

void matrixSubtraction(double A[][n1], int m1, double B[][n2], res[][n1], double m2) {
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

void matrixTranspose(double M[][n], int m, double res[][m]) {
  if (m < 0) return;
  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      res[j][i] = M[i][j];
    }
  }
}

double matrixDeterminant3D(double M[][n], int m) {
  // check if matrix is 3 x 3
  if (m != n && m != 3) return 0;
  return M[0][0]*(M[1][1]*M[2][2] - M[1][2]*M[2][1]) - M[0][1]*(M[1][0]*M[2][2] - M[1][2]*M[2][0]) + M[0][2]*(M[1][0]*M[2][1] - M[1][1]*M[2][0];
}
       
