# HW03: Doubly Linked List Using Struct and Pointers (C-style)

## Firstname Lastname

TODO - Update your name in this readme

## Problem Statement

Write a program that will take the Spotify daily artist charts and construct a double linked list that will allow the user to interact with the database by removing entries by artist name and displaying contents of the list that are of interest.

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
The database is from a text file, `spotify_daily_charts_artists_sample.csv`, which is used for input and output. Create a menu for user interface with options for adding/deleting a record to/from the database, sorting records, and displaying a record or all records on the screen.

Menu - Select:
1. Add a record
2. Delete a record
 - a.) Select record to delete using artist_id
 - b.) Select a record to delete using artist_name
3. Display database contents on the screen
 - a.) Select record to display using artist_id
 - b.) Select record to display using artist_name
 - c.) Display all artist_names by selected genre.
 - d.) Display all records
4. Sort database by total_followers
 - a.) Display top 5 most followed artists
 - b.) Display 5 least followed artists
5. Sort database by popularity
 - a.) Display top 5 popular artists
 - b.) Display least 5 popular artists
6. Save and Exit

Use the following format for the input/outputfile (Note that data follows after first row which contains headings for the `csv`):

artist_id, artist_name, total_followers, genres, popularity

0du5cEVh5yTK9QJze8zA0C,	Bruno Mars,	43236735,	['dance pop', 'pop'],	87

4IWBUUAFIplrNtaOHcJPRM,	James Arthur,	10293374,	['pop', 'talent show', 'uk pop'],	80

69GGBxA162lTqCwzJG5jLp,	The Chainsmokers,	19465938,	['dance pop', 'edm', 'electropop', 'pop', 'pop dance', 'tropical house'],	80

For ex
