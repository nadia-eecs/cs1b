# HW02: Matrix Operations Series Using C++ Arrays and Loops

## Firstname Lastname

TODO - Update your name in this readme
TODO - Add a badge from travis CI here

## Problem Statement

Write a program that reads two matrices from a file and populates

### Addition and Subtraction

Two matrices can be added or subtracted if they have the same size.
Suppose $A = [a_{ij}]$ and $B = [b_{ij}]$ are two matrices of the size $m\times n$, in which $a_{ij}$ denotes the element of $A$ in the ith row and the jth column, and so on.  The sum and difference of $A$ and $B$ are given by:

$$\begin{align*}
A+B&=[a_{ij} + b_{ij}]\\
A-B&=[a_{ij} - b_{ij}]
\end{align*}$$

### Multiplication

The multiplication of $A$ and $B$ $(A\cdot B)$ is defined only if the number of columns of A is the same as the number of rows of B.  If A is of the size $m\times n$ and B is of the size $n\times t$, the $A\cdot B = C$ (represented by $[c_{ik}]$) is of the size $m\times t$ and the element $c_{ik}$ is given by the formula:

$$\begin{equation*}
c_{ik}=a_{i1}b_{1k}+a_{i2}b_{2k}+ \dotso + a_{in}b_{nk}
\end{equation*}$$

### Determinant
A square matrix is a matrix with the same number of rows as the number of columns:

$$\[
\begin{bmatrix}
 a_{00} & a_{01} & a_{02}\\
 a_{10} & a_{11} & a_{12}\\
 a_{20} & a_{21} & a_{22}\\
% \hdotsfor{5} \\
\end{bmatrix}
\]$$

The determinant is a useful value that can be computed from the elements of a _square matrix_. The determinant of a matrix $A$ is denoted $det(A)$, $det A$, or $|A|$. For a $3\times 3$ matrix, the formula to compute its determinant is:

$$det(A) = a_{00}\cdot(a_{11}\cdot a_{22} - a_{12}\cdot a_{21}) - 
          a_{01}\cdot(a_{10}\cdot a_{22} - a_{12}\cdot a_{20}) + 
          a_{02}\cdot(a_{10}\cdot a_{21} - a_{11}\cdot a_{20})$$

Write a program that reads two matrices from a file input and populates corresponding array variables.  Use loop(s) (repetition)
to assign each element.  Write functions to compute the addition,
subtraction, and multiplication of the matrices, and the determinant
of the matrix multiplication result. Prompt the user for the desired
operation and inform if dimensions are not compatible for such operation.
Output results to the screen.  Each operation should be implemented
in a separate function.  Each function should be in its own file. The
header file should have the necessary function prototypes.  Configure a _Makefile_ to compile the project.
