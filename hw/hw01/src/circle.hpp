#include "circle.h"
#include <math.h>
#define PI 3.1416

double distance(double x1, double y1, double x2, double y2) {
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1,  2));
}

double radius(double x1, double y1, double x2, double y2) { 
	return distance(x1, y1, x2, y2);
}

double circumference(double rad) { 
	return 2 * PI * rad;
}	

double area(double rad) {
	return PI * pow(rad, 2);
}

