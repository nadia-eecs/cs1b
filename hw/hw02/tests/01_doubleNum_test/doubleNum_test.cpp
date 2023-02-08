#include "gtest/gtest.h"
#include "gen_number.h"

using namespace std;

int currentPoints_doubleNumTest = 0;
int maxPoints = 10;

TEST(hw02DoubleNumTest, doubleNumTest) {
  EXPECT_EQ(doubleNum(45), 90) << "Double Number test is failing.";

  if (!HasFailure()) {
    currentPoints_doubleNumTest += 10;
  }
  cout << "\nCurrent POINTS Generate Number Test: " << currentPoints_doubleNumTest << "/" << maxPoints << endl;
}
