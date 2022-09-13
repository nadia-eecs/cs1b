# HW00: Review of CS1A Functions

## Problem Statement

The following formula gives the distance between two points $(x_1, y_1)$ and $(x_2, y_2)$ in the Cartesian plane:

$$ d = \sqrt{(x_2 - x_1)^2 + (y_2 - y_1)^2}$$

Given the center and a point on the circle, you can use this formula to find the radius of the circle. Write a program that prompts the user to enter the center and a point on the circle. The program should then output the circle's radius, diameter, circumference, and area. Your program must have the following functions:

 - `distance`: This function takes as its parameters four numbers that represent two points in the plane and returns the distance between them.
 -  `radius`: This function takes as its parameters four numbers that represent the center and a point on the circle, calls the function `distance` to find the radius of the circle, and returns the circle's radius.
- `circumference`: This function takes as its parameter a number that represents the radius of the circle and returns the circle's circumference. (If $r$ is the radius the circumference is $2\pi r$.)
- `area`: Thsi function takes as its parameter a number that represents the radius of the circle and returns the circles are. (If $r$ is the radius, the area area is $\pi r^2$.)
- Assume that $\pi = 3.1416$

## Files to work on
- `src/circle.h` and implement the necessary functions therein
- `src/hw00.cpp` to implement your driver code to test during development

## Compiling and Running the Program
To run the program type the following shell command: 

`g++ hw00.cpp -o hw00`

This will compile your `hw00.cpp` and will save and executable as `hw00` in the same directory. Notice that `hw00.cpp` will depend on the function definitions in `circle.h` which you should not forget to `#include "circle.h"` to test your code. Use `hw00.cpp` as a driver to test edge cases.

## Script Generation
Use the command `script` to capture your interaction compiling and running the program as shown:

`script hw00.scr`
`date`
`ls -l`
`g++ hw00.cpp -o hw00`
`./hw00`
`ls -l`
`exit`

## Commit, commit, commit!
Commit all changes as you develop the code in your individual private repo. Please provide descriptive commit messages and push from local to your repository. If you do not stage, commit, and push git classroom will not receive your code at all.


