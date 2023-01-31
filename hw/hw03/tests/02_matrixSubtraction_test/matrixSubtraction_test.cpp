#include "gtest/gtest.h"
#include "matrix.h"

using namespace std;

int currentPoints_matrixSubtractionTest= 0;
int maxPoints = 10;

TEST(hw02matrixSubtractionTest, matrixSubtractionTest1) {
  // Arrange
  int E[AR_CAP][AR_CAP] = {{2, -1, 6}, {1, 3, 1}, {-4, -2, 3}};
  int F[AR_CAP][AR_CAP] = {{5, -2, 4}, {8, -1, 3}, {-4, 5, 2}};

  int n = 3, m = 3;
  int res[m][AR_CAP];
  int sol[m][AR_CAP] = {{-3, 1, 2}, {-7, 4, -2}, {0, -7, 1}};

  // Act
  matrixSubtraction(E, n, m, F, n, m, res);

  // Assert
 for (int i = 0; i < n; ++i) {
   for (int j = 0; j < m; ++j) {
     EXPECT_EQ(res[i][j], sol[i][j]) << "Your result and the solution to matrix subtraction differ at index i=" << i << " j=" << j; 
   }
 }
 
 if (!HasFailure()) {
   currentPoints_matrixSubtractionTest += 5;
 }
 cout << "\nCurrent POINTS Matrix Subtraction Check Test: " << currentPoints_matrixSubtractionTest << "/" << maxPoints << endl;
}

TEST(hw02matrixSubtractionTest, matrixSubtractionTest2) {
  // Arrange
  int E[AR_CAP][AR_CAP] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int F[AR_CAP][AR_CAP] = {{1, 2, 1}, {2, 4, 6}, {7, 2, 5}};
  int sol[AR_CAP][AR_CAP] = {{0, 0, 2}, {2, 1, 0}, {0, 6, 4}};

  int n = 3, m = 3;
  int res[m][AR_CAP];

  // Act
  matrixSubtraction(E, n, m, F, n, m, res);

  // Assert
 for (int i = 0; i < n; ++i) {
   for (int j = 0; j < m; ++j) {
     EXPECT_EQ(res[i][j], sol[i][j]) << "Your result and the solution to matrix subtraction differ at index i=" << i << " j=" << j; 
   }
 }
 
 if (!HasFailure()) {
   currentPoints_matrixSubtractionTest += 5;
 }
 cout << "\nCurrent POINTS Matrix Subtraction Check Test: " << currentPoints_matrixSubtractionTest << "/" << maxPoints << endl;
}
