#include "gtest/gtest.h"
#include "circle.h"

using namespace std;

int currentPoints_circumferenceTest= 0;
int maxPoints = 10;

TEST(hw01CircumferenceTest, circumferenceTest) {
	EXPECT_EQ((double) trunc(1000*circumference(distance(5, 6, -7, 11)))/1000,(double) trunc(1000* 81.6816)/1000) << "Circumference Test 1 failed.";
	EXPECT_EQ((double) trunc(1000*circumference(distance(3, 4, 0, 0)))/1000, (double) trunc(1000*31.4161)/1000) << "Circumference Test 2 failed.";


	if (!HasFailure()) {
		currentPoints_circumferenceTest += 10;
	}
	cout << "\nCurrent POINTS Circumference Check Test: " << currentPoints_circumferenceTest << "/" << maxPoints << endl;
}



