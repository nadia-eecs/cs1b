# HW04: Doubly Linked List Using Struct and Pointers (C-style)

## Firstname Lastname

TODO - Update your name in this readme.

TODO - Add your github actions badge here.

## Problem Statement

Write a program that will take the Spotify daily artist charts and construct a double linked list that will allow the user to interact with the database by finding entries by artist name and displaying contents of the list that are of interest.

## Struct Organization
You should have a single header file that declares the following structs that will be used to organize your double linked list:
```c++
struct alist {
  int length;
  aentry *first;
  aentry *last;
};

struct aentry {
  alist *list;
  aentry *next;
  aentry *prev;
  aentry *artist;
};

struct artist {
  string artist_id;
  string artist_name;
  int total_followers;
  string genres[AR_SIZE];
  int popularity
};
```
## User Interface
Create a menu for user interface with options for adding/deleting a record to/from the database, searching, and displaying a record or all records on the screen. The menu driven code should be written in your user defined main function in src (separate from the sample driver code given in the main directory of hw03).

Menu - Select:
1. Add a record
 * a.) Add a record to the beginning of the list
 * b.) Add a record to the end of the list
 * c.) Add an artist record before another artist record
 * d.) Add an artist record after another artist record
2. Delete a record
 * a.) Delete the first artist in the record
 * b.) Delete the last artist in the record
 * b.) Select a record to delete using artist_name
3. Display database contents on the screen
 * a.) Select record to display using artist_name
 * b.) Display all records
4. Save and Exit

## EXTRA CREDIT: CSV File Read/Write Using C++
Use the following format for the input/outputfile (Note that data follows after first row which contains headings for the `csv`):
```
artist_id, artist_name, total_followers, genres, popularity
0du5cEVh5yTK9QJze8zA0C, Bruno Mars, 43236735, ['dance pop', 'pop'], 87
4IWBUUAFIplrNtaOHcJPRM, James Arthur, 10293374, ['pop', 'talent show', 'uk pop'], 80
69GGBxA162lTqCwzJG5jLp, The Chainsmokers, 19465938, ['dance pop', 'edm', 'electropop', 'pop', 'pop dance', 'tropical house'], 80
```
For more information on how to manage CSV refer to this article from [geeksforgeeks](https://www.geeksforgeeks.org/csv-file-management-using-c/).

## Note
In order to receive full credit for this homework assignment, you must complete:

 - `artist.cpp`
 - `artistList.cpp`
 - `Makefile`
 - `main_menu.cpp`
 - `hw03.scr`: script file showing valgrind on your executable code without memory leaks or errors.

While a `main.cpp` is provided to you in the `hw03` directory, this main function serves as a driver for you to quickly evaluate your code functions. This driver code is different than the menu driven code that is expected in the user interface section and should be expressed in your `main_menu.cpp`. Please work out of the directory `src`.

- Make sure your last push is before the deadline. Your last push will be considered as your final submission.

- It is recommended that you add your name to your `README.MD`

## Script Generation
Use the command `script` to capture your interaction compiling and running the program `main_menu.cpp` and its dependencies: 

`script hw03.scr`

`make all`

`valgrind ./hw03`

`exit`

Save all files into `hw03/src`
