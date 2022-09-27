#include "gtest/gtest.h"
#include "circle.hpp"

using namespace std;

int currentPoints_circumferenceTest= 0;
int maxPoints = 10;

TEST(hw01CircumferenceTest, circumferenceTest) {
	EXPECT_EQ(circumference(distance(5, 6, -7, 11)), 81.6816) << "Circumference Test 1 failed.";
	EXPECT_EQ(circumference(distance(3, 4, 0, 0)), 31.4161) << "Circumference Test 2 failed.";


	if (!HasFailure()) {
		currentPoints_circumferenceTest += 10;
	}
	cout << "\nCurrent POINTS Circumference Check Test: " << currentPoints_circumferenceTest << "/" << maxPoints << endl;
}



