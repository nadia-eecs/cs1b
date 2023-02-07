#include "gtest/gtest.h"
#include "gen_number.h"

using namespace std;

int currentPoints_raiseFirstDigitPowSecondDigitTest = 0;
int maxPoints = 10;

TEST(hw02RaiseFirstDigitPowSecondDigit, raiseFirstDigitPowSecondDigitTest) {
  EXPECT_EQ(raiseFirstDigitPowSecondDigit(42), 16) << "Raise the First Digit to the Power of the Second Digit Test is failing.";
  if (!HasFailure()) {
    currentPoints_raiseFirstDigitPowSecondDigitTest += 0;
  }
  cout << "\nCurrent POINTS Raise the First Digit to the Power of the Second Test: " << currentPoints_raiseFirstDigitPowSecondDigitTest << "/" << maxPoints << endl;
}

