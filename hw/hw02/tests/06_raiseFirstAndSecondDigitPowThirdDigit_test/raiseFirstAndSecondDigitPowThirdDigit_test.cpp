#include "gtest/gtest.h"
#include "gen_number.h"

using namespace std;

int currentPoints_raiseFirstAndSecondDigitPowThirdDigitTest = 0;
int maxPoints = 10;

TEST(hw02RaiseFirstAndSecondDigitPowThirdDigit, raiseFirstAndSecondDigitPowThirdDigitTest) {
  EXPECT_EQ(raiseFirstAndSecondDigitPowThirdDigit(102), 100) << "Raise First And Second Digit to the Power of the Third Digit if Third Digit is < 4 test is failing.";
  if (!HasFailure()) {
    currentPoints_raiseFirstAndSecondDigitPowThirdDigitTest =+ 10;
  }
  cout << "\nCurrent POINTS Raise First and Second Digit to the Power of the Third Digit if Third Digit is < 4 Test: " << currentPoints_raiseFirstAndSecondDigitPowThirdDigitTest << "/" << maxPoints << endl;
}
