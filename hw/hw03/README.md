# HW02: Matrix Operations Series Using C++ Arrays and Loops

## Firstname Lastname

TODO - Update your name in this readme

TODO - Add a badge from github actions here

## Problem Statement

Write a program that reads two matrices of type `int` from a file with the format given in `input.txt`
The first integer represents the number of rows.
The second integer represents the number of columns.
The third line and beyond can contain values that are written in the format of the matrix it represents. The file then repeats the same format for the second matrix.

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

### Transpose

Given a 2D array matrix, return the transpose of matrix.

The transpose of a matrix is the matrix flipped over its main diagonal, switching the matrix's row and column indices.

$$\begin{bmatrix}
 a_{00} & a_{01} & a_{02}\\
 a_{10} & a_{11} & a_{12}\\
 a_{20} & a_{21} & a_{22}\\
% \hdotsfor{5} \\
\end{bmatrix}$$

becomes:

$$\begin{bmatrix}
 a_{00} & a_{10} & a_{20}\\
 a_{01} & a_{11} & a_{21}\\
 a_{02} & a_{12} & a_{22}\\
% \hdotsfor{5} \\
\end{bmatrix}$$

## 3x3 Matrix  Determinant

A square matrix is a matrix with the same number of rows as the number of columns:

$$\begin{bmatrix}
 a_{00} & a_{01} & a_{02}\\
  a_{10} & a_{11} & a_{12}\\
   a_{20} & a_{21} & a_{22}\\
   % \hdotsfor{5} \\
   \end{bmatrix}$$

The _determinant_ is a useful value that can be computed from the elements of a _square matrix_. The determinant of a matrix $A$ is denoted $det(A)$, $det A$, or $|A|$. 
For a $3\times 3$ matrix, the formula to compute the  determinant is:

$$det(A) = a_{00}\cdot(a_{11}\cdot a_{22} - a_{12}\cdot a_{21}) - a_{01}\cdot(a_{10}\cdot a_{22} - a_{12}\cdot a_{20}) + a_{02}\cdot(a_{10}\cdot a_{21} - a_{11}\cdot a_{20})$$

## Assignment Requirements

Write a program that reads two matrices from a file input and populates corresponding _array_ variables.Use loop(s) (repetition) to assign each element.  Write functions to compute the addition,
subtraction, and multiplication of the matrices, and the determinant of the matrix multiplication result.
Prompt the user for file (recall it should include the path). Error check in each function to make sure that the matrix dimensions are correct especially when performing multiplication of matrices. 

Output results to the screen.  Each operation should be implemented in a separate function in `matrix.cpp`. The header file should have the necessary function prototypes.  Configure a _Makefile_ to compile the project.

You are responsible for the following function definitions in `matrix.cpp`:
- `void fileIO(string filename, int A[][AR_CAP], int& n1, int& m1, int B[][AR_CAP], int& n2, int& m2)`

- `void matrixAddition(const int A[][AR_CAP], int n1, int m1, const int B[][AR_CAP], int n2, int m2, int res[][AR_CAP])`

- `void matrixSubtraction(int A[][AR_CAP], int n1, int m1, int B[][AR_CAP], int n2, int m2, int res[][AR_CAP])`

- `void matrixMultiplication(int A[][AR_CAP], int n1, int m1, int B[][AR_CAP], int n2, int m2, int res[][AR_CAP])`

- `void matrixTranspose(int M[][AR_CAP], int n, int m, int res[][AR_CAP])`

- `double matrixDeterminant3D(int M[][AR_CAP], int n, int m)`

- `void print2DMatrix(const int M[][AR_CAP], int n1, int m1)`

You may predefine `AR_CAP` with a size of 50 to statically allocate memory to the 2D matrix initially. Note that the resultant matrix to the `matrixMultiplication` function must be initialized to zero prior to the function call. 

## To Submit
- `matrix.cpp`: your functions file
- `matrix.h`: the header to your functions file
- `hw03.cpp`: your customized main function/driver code
- `Makefile`: with proper commands
- `hw03.scr`: script file showing how your code functions in the context of your main function

## Script Generation
Use the command `script` to capture your interaction compiling and running the program, including all operations, as shown below:

`script hw03.scr`

`date`

`make all`

`ls -l`

`./hw03`

`make clean`

`exit`

Save all files into the `hw03/src`.

## NOTE
- It is required that you add your name and github actions badge to your readme.
- Check the logs from github actions to verify the correctness of your program.
- The Initial code will not necessarily compile. You will have to write the necessary code.
- Commit all changes as you develop the code in your individual private repo. Please provide descriptive commit messages and push from local to your repository. If you do not stage, commit, and push git classroom will not receive your code at all.
- Make sure your last push is before the deadline. Your last push will be considered as your final submission.
- There is no partial credit for code that does not compile.
- If you need to be considered for partial grade for any reason(failing tests on github actions,etc). Then message the staff on canvas before the deadline. Late email requests may not be considered.

