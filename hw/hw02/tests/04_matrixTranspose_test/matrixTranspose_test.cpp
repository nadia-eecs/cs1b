#include "gtest/gtest.h"
#include "matrix.h"

using namespace std;

int currentPoints_matrixTransposeTest= 0;
int maxPoints = 20;

TEST(hw02matrixTransposeTest, matrixTransposeTest1) {
  // Arrange
  int E[AR_CAP][AR_CAP] = {{2, -1, 6}, {1, 3, 1}, {-4, -2, 3}};

  int n = 3, m = 3;
  int res[AR_CAP][AR_CAP];
  int sol[AR_CAP][AR_CAP] = {{2, 1, -4}, {-1, 3, -2}, {6, 1, 3}};

  // Act
  matrixTranspose(E, n, m, res);

  // Assert
 for (int i = 0; i < n; ++i) {
   for (int j = 0; j < m; ++j) {
     EXPECT_EQ(res[i][j], sol[i][j]) << "Your result and the solution to matrix transpose differ at index i=" << i << " j=" << j; 
   }
 }
 
 if (!HasFailure()) {
   currentPoints_matrixTransposeTest += 5;
 }
 cout << "\nCurrent POINTS Matrix Transpose Check Test: " << currentPoints_matrixTransposeTest << "/" << maxPoints << endl;
}

TEST(hw02matrixTransposeTest, matrixTransposeTest2) {
  // Arrange
  int E[AR_CAP][AR_CAP] = {{5, -2, 4}, {8, -1, 3}, {-4, 5, 2}};

  int n = 3, m = 3;
  int res[AR_CAP][AR_CAP];
  int sol[AR_CAP][AR_CAP] = {{5, 8, -4}, {-2, -1, 5}, {4, 3, 2}};

  // Act
  matrixTranspose(E, n, m, res);

  // Assert
 for (int i = 0; i < n; ++i) {
   for (int j = 0; j < m; ++j) {
     EXPECT_EQ(res[i][j], sol[i][j]) << "Your result and the solution to matrix transpose differ at index i=" << i << " j=" << j; 
   }
 }
 
 if (!HasFailure()) {
   currentPoints_matrixTransposeTest += 5;
 }
 cout << "\nCurrent POINTS Matrix Transpose Check Test: " << currentPoints_matrixTransposeTest << "/" << maxPoints << endl;
}


TEST(hw02matrixTransposeTest, matrixTransposeTest3) {
  // Arrange
  int E[AR_CAP][AR_CAP] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  //int F[AR_CAP][AR_CAP] = {{1, 2, 1}, {2, 4, 6}, {7, 2, 5}};

  int n = 3, m = 3;
  int res[AR_CAP][AR_CAP];
  int sol[AR_CAP][AR_CAP] = {{1, 4, 7}, {2, 5, 8}, {3, 6, 9}};

  // Act
  matrixTranspose(E, n, m, res);

  // Assert
 for (int i = 0; i < n; ++i) {
   for (int j = 0; j < m; ++j) {
     EXPECT_EQ(res[i][j], sol[i][j]) << "Your result and the solution to matrix transpose differ at index i=" << i << " j=" << j; 
   }
 }
 
 if (!HasFailure()) {
   currentPoints_matrixTransposeTest += 5;
 }
 cout << "\nCurrent POINTS Matrix Transpose Check Test: " << currentPoints_matrixTransposeTest << "/" << maxPoints << endl;
}

TEST(hw02matrixTransposeTest, matrixTransposeTest4) {
  // Arrange
  int E[AR_CAP][AR_CAP] = {{1, 2, 1}, {2, 4, 6}, {7, 2, 5}};

  int n = 3, m = 3;
  int res[AR_CAP][AR_CAP];
  int sol[AR_CAP][AR_CAP] = {{1, 2, 7}, {2, 4, 2}, {1, 6, 5}};

  // Act
  matrixTranspose(E, n, m, res);

  // Assert
 for (int i = 0; i < n; ++i) {
   for (int j = 0; j < m; ++j) {
     EXPECT_EQ(res[i][j], sol[i][j]) << "Your result and the solution to matrix transpose differ at index i=" << i << " j=" << j; 
   }
 }
 
 if (!HasFailure()) {
   currentPoints_matrixTransposeTest += 5;
 }
 cout << "\nCurrent POINTS Matrix Transpose Check Test: " << currentPoints_matrixTransposeTest << "/" << maxPoints << endl;
}
