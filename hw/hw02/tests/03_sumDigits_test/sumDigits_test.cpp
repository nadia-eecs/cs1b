#include "gtest/gtest.h"
#include "gen_number.h"

using namespace std;

int currentPoints_sumDigitsTest = 0;
int maxPoints = 10;

TEST(hw02SumDigitsTest, sumDigitsTest) {
  EXPECT_EQ(sumDigits(56), 11) << "Sum of Digits test is failing.";
  EXPECT_EQ(sumDigits(34), 7) << "Sum of Digits test is failing.";

  if (!HasFailure()) {
    currentPoints_sumDigits += 10;
  }
  cout << "\nCurrent POINTS Sum of Digits Test: " << currentPoints_sumDigitsTest << "/" << maxPoints << endl;
}
