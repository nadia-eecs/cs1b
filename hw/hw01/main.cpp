// Insert driver code main function here with necessary imports
#include <iostream>
#include "src/circle.h"
using namespace std;

int main() {
	double x1 = 4, y1 = 1, x2 = -2, y2 = 8;
	cout << " the distance between (" << x1 << "," << y1 << ") and (" << x2 << "," << y2 << ") is equal to: " << distance(x1, y1, x2, y2) << endl;
	cout << " the radius between (" << x1 << "," << y1 << ") and (" << x2 << "," << y2 << ") is equal to: " << radius(x1, y1, x2, y2) << endl;
	cout << " the circumference of the circle defined by (" << x1 << "," << y1 << ") and (" << x2 << "," << y2 << ") is equal to: " << circumference(radius(x1, y1, x2, y2)) << endl;
	cout << " the area of the circle defined by (" << x1 << "," << y1 << ") and (" << x2 << "," << y2 << ") is equal to: " << area(radius(x1, y1, x2, y2)) << " = 13" << endl;
	return 0;
}



