#include "gtest/gtest.h"
#include "circle.hpp"

using namespace std;

int currentPoints_distanceTest= 0;
int maxPoints = 10;

TEST(hw01DistanceTest, distanceTest) {
	EXPECT_EQ(distance(5, 6, -7, 11), 13) << "Distance test is failing.";
	EXPECT_EQ(distance(3, 4, 0, 0), 5) << "Second distance test failed.";


	if (!HasFailure()) {
		currentPoints_distanceTest += 10;
	}
	cout << "\nCurrent POINTS Distance Check Test: " << currentPoints_distanceTest << "/" << maxPoints << endl;
}



