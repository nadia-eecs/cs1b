# HW03: Doubly Linked List Using Struct and Pointers (C-style)

## Firstname Lastname

TODO - Update your name in this readme

## Problem Statement

Write a program that will take the Spotify daily artist charts and construct a double linked list that will allow the user to remove entries by artist name and display contents of the list.

You should have a single header file that declares the following structs:
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

