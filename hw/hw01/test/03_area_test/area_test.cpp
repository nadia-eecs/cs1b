#include "gtest/gtest.h"
#include "circle.hpp"

using namespace std;

int currentPoints_areaTest= 0;
int maxPoints = 10;

TEST(hw01AreaTest, areaTest) {
	EXPECT_EQ(area(distance(5, 6, -7, 11)), 530.93) << "Area Test 1 failed.";
	EXPECT_EQ(area(distance(3, 4, 0, 0)), 78.54) << "Area Test 2 failed.";


	if (!HasFailure()) {
		currentPoints_areaTest += 10;
	}
	cout << "\nCurrent POINTS Area Check Test: " << currentPoints_areaTest << "/" << maxPoints << endl;
}



