#include "gtest/gtest.h"
#include "matrix.h"

using namespace std;

int currentPoints_fileIOTest = 0;
int maxPoints = 10;

struct arrayTest: public testing::Test {
  int A[AR_CAP][AR_CAP] = {};
  int B[AR_CAP][AR_CAP] = {};
  int n1, m1, n2, m2;
  int n1, m1, n2, m2;
  void SetUp() {
    fileIO("../input.txt", A, n1, m1, B, n2, m2);
  }
  void TearDown(){}
};

TEST_F(hw00fileIOTest, fileIOTest) {
  int A_fi[AR_CAP][AR_CAP] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
  int B_fi[AR_CAP][AR_CAP] = {{1, 2, 3}, {3, 3, 0}, {0, 1, 3}};

  for (int i = 0; i < n1; ++i) {
    for (int j = 0; j < m1; ++j) {
      EXPECT_EQ(A[i][j], A_fi[i][j]) << "Matrix A and A_fi differ at index i=" << i << " and j=" << j;
      EXPECT_EQ(B[i][j], B_fi[i][j]) << "Matrix B and B_fi differ at index i=" << i << " and j=" << j;
    }
  }

  if (!HasFailure()) {
    currentPoints_fileIOTest += 10;
  }
  cout << "\nCurrent POINTS File IO Check Test: " << currentPoints_fileIOTest << "/" << maxPoints << endl;
}
