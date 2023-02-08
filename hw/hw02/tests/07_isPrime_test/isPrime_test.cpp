#include "gtest/gtest.h"
#include "post_process.h"

using namespace std;

int currentPoints_isPrimeTest = 0;
int maxPoints = 10;

TEST(hw02IsPrime, isPrimeTest) {
  EXPECT_TRUE(isNumPrime(29)) << "Prime Number test is failing.";
  if (!HasFailure()) {
    currentPoints_isPrimeTest += 10;
  }
  cout << "\nCurrent POINTS for the Prime Number Test: " << currentPoints_isPrimeTest << "/" << maxPoints << endl;
}
