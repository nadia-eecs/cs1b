#include "gtest/gtest.h"
#include "dateType.h"

using namespace std;

int maxPoints = 10;
int currentPoints_dateType = 0;

TEST(hw05TestsetDate, setDateTest) {
  dateType *date = new dateType(4, 20, 2023);
  date->setDate(3, 11, 2022);

  EXPECT_EQ(date->getMonth(), 3);
  EXPECT_EQ(date->getDay(), 11);
  EXPECT_EQ(date->getYear(), 2022);

  if (HasFailure()) {
    cerr << "\nsetDateTest has failed\"" << endl;
  } else {
    currentPoints_dateType += 10;
  }
  cout << "\nCurrent POINTS:" << currentPoints_dateType << "/" << maxPoints << endl;
  delete date;
  date = nullptr;
}
