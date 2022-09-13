# HW00: Review of CS1A Functions

## Problem Statement

The following formula gives the distance between two points $(x_1, y_1)$ and $(x_2, y_2)$ in the Cartesian plane:

$$ d = \sqrt{(x_2 - x_1)^2 + (y_2 - y_1)^2}$$

Given the center and a point on the circle, you can use this formula to find the radius of the circle. Write a program that prompts the user to enter the center and a point on the circle. The program should then output the circle's radius, diameter, circumference, and area. Your program must have the following functions:

 - `distance`: This function takes as its parameters four numbers that represent two points in the plane and returns the distance between them.
 -  `radius`: This function takes as its parameters four numbers that represent the center and a point on the circle, calls the function `distance` to find the radius of the circle, and returns the circle's radius.
- `cirucmference`: This function takes as its parameter a number that represents the radius of the circle and returns the circle's circumference. (If $r$ is the radius the circumference is $2\pi r$.)
- `area`: Thsi function takes as its parameter a number that represents the radius of the circle and returns the circles are. (If $r$ is the radius, the area area is $\pi r^2$.)
- Assume that $\pi = 3.1416$

