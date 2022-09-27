#include "gtest/gtest.h"
#include "circle.hpp"

using namespace std;

int currentPoints_radiusTest= 0;
int maxPoints = 10;

TEST(hw01RadiusTest, radiusTest) {
	EXPECT_EQ(distance(5, 6, -7, 11), radius(5, 6, -7, 11)) << "Radius does not call distance function.";
	EXPECT_EQ(distance(3, 4, 0, 0), radius(3, 4, 0, 0)) << "Radius does not call distance function.";


	if (!HasFailure()) {
		currentPoints_radiusTest += 10;
	}
	cout << "\nCurrent POINTS Radius Check Test: " << currentPoints_radiusTest << "/" << maxPoints << endl;
}



