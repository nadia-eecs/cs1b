#include "gtest/gtest.h"
#include "gen_number.h"

using namespace std;

int currentPoints_raisePow234Test = 0;
int maxPoints = 30;

TEST(hw02RaisePow234, raisePow234Test) {
  EXPECT_EQ(raisePow2_3_4(12, 2), 144) << "Raise to the power of 2 test is failing.";
 if (!HasFailure()) {
   currentPoints_raisePow234Test += 10;
 }

  EXPECT_EQ(raisePow2_3_4(12, 3), 1728) << "Raise to the power of 3 test is failing.";
 if (!HasFailure()) {
   currentPoints_raisePow234Test += 10;
 }

  EXPECT_EQ(raisePow2_3_4(12, 4), 20736) << "Raise to the power of 4 test is failing.";
 
 if (!HasFailure()) {
   currentPoints_raisePow234Test += 10;
 }
 cout << "\nCurrent POINTS Raise to the Power of 2, 3, or 4 Test: " << currentPoints_raisePow234Test << "/" << maxPoints << endl; 
}
