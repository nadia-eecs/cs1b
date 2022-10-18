#include "matrix.h"

void fileIO(string filename, int A[][AR_CAP],int& n1, int& m1, int B[][AR_CAP], int& n2, int& m2) {
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

void print2DMatrix(const int M[][AR_CAP], int n1, int m1) {
  if (m1 == 0) return;
  for (int i = 0; i < n1; ++i) {
    for (int j = 0; j < m1; ++j) {
      cout << M[i][j] << " ";
    }
    cout << endl;
  }
}

void matrixAddition(const int A[][AR_CAP], int n1, int m1, const int B[][AR_CAP], int n2, int m2, int res[][AR_CAP]) {
  // matrix addition is defined if and only if A and B have the same size
  if (n1 != n2 && m1 != m2) return;
  for (int i = 0; i < n1; ++i) {
    for (int j = 0; j < m1; ++j) {
      res[i][j] = A[i][j] + B[i][j];
    }
  }
}

void matrixSubtraction(int A[][AR_CAP], int n1, int m1, int B[][AR_CAP], int n2, int m2, int res[][AR_CAP]) {
  // matrix subtraction is defined if and only if A and B have the same size
  if (n1 != n2 && m1 != m2) return;
  for (int i = 0; i < n1; ++i) {
    for (int j = 0; j < m1; ++j) {
      res[i][j] = A[i][j] - B[i][j];
    }
  }
}

void matrixMultiplication(int A[][AR_CAP], int n1, int m1, int B[][AR_CAP], int n2, int m2, int res[][AR_CAP]) {
  // matrix multiplication is defined if and only if the number columns
  // of A is the same as the number of rows of B.
  if (m1 != n2) return;
  for (int i = 0; i < n1; ++i) {
    for (int j = 0; j < m2; ++j) {
      for (int k = 0; k < n2; ++k) {
        res[i][j] += A[i][k] * B[k][j];
      }
    }
  }
}

void matrixTranspose(int M[][AR_CAP], int n, int m, int res[][AR_CAP]) {
  if (m < 0) return;
  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      res[j][i] = M[i][j];
    }
  }
}

double matrixDeterminant3D(int M[][AR_CAP], int n, int m) {
  // check if matrix is 3 x 3
  if (m != n && m != 3) return 0;
  return M[0][0]*(M[1][1]*M[2][2] - M[1][2]*M[2][1]) - M[0][1]*(M[1][0]*M[2][2] - M[1][2]*M[2][0]) + M[0][2]*(M[1][0]*M[2][1] - M[1][1]*M[2][0]);
}

