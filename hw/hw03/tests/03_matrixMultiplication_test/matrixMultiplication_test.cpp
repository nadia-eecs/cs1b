#include "gtest/gtest.h"
#include "matrix.h"

using namespace std;

int currentPoints_matrixMultiplicationTest= 0;
int maxPoints = 10;

TEST(hw02matrixMultiplicationTest, matrixMultiplicationTest1) {
  // Arrange
  int E[AR_CAP][AR_CAP] = {{2, -1, 6}, {1, 3, 1}, {-4, -2, 3}};
  int F[AR_CAP][AR_CAP] = {{5, -2, 4}, {8, -1, 3}, {-4, 5, 2}};

  int n = 3, m = 3;
  int res[m][AR_CAP];
  int sol[m][AR_CAP] = {{-22, 27, 17}, {25, 0, 15}, {-48, 25, -16}};

  // Act
  matrixMultiplication(E, n, m, F, n, m, res);

  // Assert
 for (int i = 0; i < n; ++i) {
   for (int j = 0; j < m; ++j) {
     EXPECT_EQ(res[i][j], sol[i][j]) << "Your result and the solution to matrix multiplication differ at index i=" << i << " j=" << j; 
   }
 }
 
 if (!HasFailure()) {
   currentPoints_matrixMultiplicationTest += 5;
 }
 cout << "\nCurrent POINTS Matrix Multiplication Check Test: " << currentPoints_matrixMultiplicationTest << "/" << maxPoints << endl;
}

TEST(hw02matrixMultiplicationTest, matrixMultiplicationTest2) {
  // Arrange
  int E[AR_CAP][AR_CAP] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int F[AR_CAP][AR_CAP] = {{1, 2, 1}, {2, 4, 6}, {7, 2, 5}};
  int sol[AR_CAP][AR_CAP] = {{26, 16, 28}, {56, 40, 64}, {86, 64, 100}};

  int n = 3, m = 3;
  int res[m][AR_CAP];

  // Act
  matrixMultiplication(E, n, m, F, n, m, res);

  // Assert
 for (int i = 0; i < n; ++i) {
   for (int j = 0; j < m; ++j) {
     EXPECT_EQ(res[i][j], sol[i][j]) << "Your result and the solution to matrix multiplication differ at index i=" << i << " j=" << j; 
   }
 }
 
 if (!HasFailure()) {
   currentPoints_matrixMultiplicationTest += 5;
 }
 cout << "\nCurrent POINTS Matrix Multiplication Check Test: " << currentPoints_matrixMultiplicationTest << "/" << maxPoints << endl;
}
