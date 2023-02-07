#include "gtest/gtest.h"
#include "gen_number.h"

using namespace std;

int currentPoints_generateNumTest = 0;
int maxPoints = 10;

TEST(hw02GenerateNumTest, generateNumTest) {
  x = generateNum();
  y = generateNum();
  z = generateNum();
  EXPECT_TRUE((x >= 10) && (x < 100) && (x != y) && (x != z)) << "Random number generator is producing the same number.";

  if (!HasFailure()) {
    currentPoints_generateNumTest += 10;
  }
  cout << "\nCurrent POINTS Generate Number Test: " << currentPoints_generateNumTest << "/" << maxPoints << endl;
}
