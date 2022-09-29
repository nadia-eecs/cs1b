#include "gtest/gtest.h"
#include "circle.h"

using namespace std;

int currentPoints_areaTest= 0;
int maxPoints = 10;

TEST(hw01AreaTest, areaTest) {
	EXPECT_EQ((double) trunc(1000*area(distance(5, 6, -7, 11)))/1000, (double)std::trunc(1000*530.93)/1000) << "Area Test 1 failed.";
	EXPECT_EQ((double) trunc(1000*area(distance(3, 4, 0, 0)))/1000, (double)std::trunc(1000*78.539)/1000) << "Area Test 2 failed.";


	if (!HasFailure()) {
		currentPoints_areaTest += 10;
	}
	cout << "\nCurrent POINTS Area Check Test: " << currentPoints_areaTest << "/" << maxPoints << endl;
}



