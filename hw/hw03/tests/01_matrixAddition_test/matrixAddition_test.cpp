#include "gtest/gtest.h"
#include "matrix.h"

using namespace std;

int currentPoints_matrixAdditionTest= 0;
int maxPoints = 10;

TEST(hw02matrixAdditionTest, matrixAdditionTest1) {
  // Arrange
  int E[AR_CAP][AR_CAP] = {{2, -1, 6}, {1, 3, 1}, {-4, -2, 3}};
  int F[AR_CAP][AR_CAP] = {{5, -2, 4}, {8, -1, 3}, {-4, 5, 2}};

  int n = 3, m = 3;
  int res[m][AR_CAP];
  int sol[m][AR_CAP] = {{7, -3, 10}, {9, 2, 4}, {-8, 3, 5}};

  // Act
  matrixAddition(E, n, m, F, n, m, res);

  // Assert
 for (int i = 0; i < n; ++i) {
   for (int j = 0; j < m; ++j) {
     EXPECT_EQ(res[i][j], sol[i][j]) << "Your result and the solution to matrix addition differ at index i=" << i << " j=" << j; 
   }
 }
 
 if (!HasFailure()) {
   currentPoints_matrixAdditionTest += 5;
 }
 cout << "\nCurrent POINTS Matrix Addition Check Test: " << currentPoints_matrixAdditionTest << "/" << maxPoints << endl;
}

TEST(hw02matrixAdditionTest, matrixAdditionTest2) {
  // Arrange
  int E[AR_CAP][AR_CAP] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int F[AR_CAP][AR_CAP] = {{1, 2, 1}, {2, 4, 6}, {7, 2, 5}};
  int sol[AR_CAP][AR_CAP] = {{2, 4, 4}, {6, 9, 12}, {14, 10, 14}};

  int n = 3, m = 3;
  int res[m][AR_CAP];

  // Act
  matrixAddition(E, n, m, F, n, m, res);

  // Assert
 for (int i = 0; i < n; ++i) {
   for (int j = 0; j < m; ++j) {
     EXPECT_EQ(res[i][j], sol[i][j]) << "Your result and the solution to matrix addition differ at index i=" << i << " j=" << j; 
   }
 }
 
 if (!HasFailure()) {
   currentPoints_matrixAdditionTest += 5;
 }
 cout << "\nCurrent POINTS Matrix Addition Check Test: " << currentPoints_matrixAdditionTest << "/" << maxPoints << endl;
}
