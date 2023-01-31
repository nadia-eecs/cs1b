#include "gtest/gtest.h"
#include "matrix.h"

using namespace std;

int currentPoints_matrixDeterminantTest= 0;
int maxPoints = 20;

TEST(hw02matrixDeterminantTest, matrixDeterminantTest1) {
  // Arrange
  int E[AR_CAP][AR_CAP] = {{1, 3, -2}, {0, 5, 1}, {4, -1, 2}};

  int n = 3, m = 3;
  int res;
  int sol = 63;

  // Act
  res = matrixDeterminant3D(E, n, m);

  // Assert
  EXPECT_EQ(res, sol) << "3D matrix determinant failed"; 
 
 if (!HasFailure()) {
   currentPoints_matrixDeterminantTest += 10;
 }
 cout << "\nCurrent POINTS 3D Matrix Determinant Check Test: " << currentPoints_matrixDeterminantTest << "/" << maxPoints << endl;
}

TEST(hw02matrixDeterminantTest, matrixDeterminantTest2) {
  // Arrange
  int E[AR_CAP][AR_CAP] = {{1, 3, 2}, {-3, -1, -3}, {2, 3, 1}};

  int n = 3, m = 3;
  int res;
  int sol = -15;

  // Act
  res = matrixDeterminant3D(E, n, m);

  // Assert
  EXPECT_EQ(res, sol) << "3D matrix determinant failed"; 
  if (!HasFailure()) {
   currentPoints_matrixDeterminantTest += 10;
 }
 cout << "\nCurrent POINTS 3D Matrix Determinant Check Test: " << currentPoints_matrixDeterminantTest << "/" << maxPoints << endl;
}

