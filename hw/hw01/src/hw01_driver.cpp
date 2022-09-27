// Insert driver code main function here with necessary imports
#include "circle.hpp"
#include <iostream>
using namespace std;

int main() {
	double x1 = 5, y1 = 6, x2 = -7, y2 = 11;
	cout << " the distance between (5, 6) and (-7, 11) is equal to: " << distance(x1, y1, x2, y2) << " = 13" << endl;
	cout << " the circumference between (5,6) and (-7, 11) is equal to: " << circumference(distance(x1, y1, x2, y2)) << endl;
	cout << " the circumference between (3,4) and (0, 0) is equal to: " << circumference(distance(3, 4, 0, 0)) << endl;
	cout << " the area between (5,6) and (-7, 11) is equal to: " << area(distance(x1, y1, x2, y2)) << endl;
	cout << " the area between (3,4) and (0, 0) is equal to: " << area(distance(3, 4, 0, 0)) << endl;
	return 0;
}



