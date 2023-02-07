#include "gtest/gtest.h"
#include "gen_number.h"

using namespace std;

int currentPoints_doubleNumTest = 0;
int maxPoints = 10

TEST(hw02DoubleNumTest, doubleNumTest) {
  EXPECT_EQ(doubleNum(12), 24) << "Doubling number test is failing.";
  EXPECT_EQ(doubleNum(31), 62) << "Doubling number test is failing.";

  if (!HasFailure()) {
    currentPoints_distanceTest += 10;
  }
  cout << "\nCurrent POINTS Doubling Number Test: " << currentPoints_doubleNumTest<< "/" << maxPoints << endl;
}
