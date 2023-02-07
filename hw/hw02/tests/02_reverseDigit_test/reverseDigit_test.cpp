#include "gtest/gtest.h"
#include "gen_number.h"

using namespace std;

int currentPoints_reverseDigitTest = 0;
int maxPoints = 10;

TEST(hw02ReverseDigitTest, reverseDigitTest) {
  EXPECT_EQ(reverseDigit(24), 42) << "Reverse digit 24 did not equal 42.";
  EXPECT_EQ(reverseDigit(97), 79) << "Reverse digit 97 did not equal 79.";

  if (!HasFailure()) {
    currentPoints_reverseDigitTest += 10;
  }
  cout << "\nCurrent POINTS Reverse Digit Test: " << currentPoints_reverseDigitTest << "/" << maxPoints << endl;
}
