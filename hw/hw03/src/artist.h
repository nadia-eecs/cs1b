// Artist.h: header file for artist spotify records

#ifndef _ARTIST_H_
#define _ARTIST_H_
#define AR_LEN 10

#include <string>
#include <iostream>
#include <vector>
using namespace std;

struct Artist {
  string artist_id;
  string artist_name;
  int total_followers;
  string genres[AR_LEN];
  int popularity;
};

typedef struct Artist ARTIST; 

// Allocate a new artist record
ARTIST *newArtist(string artist_id, string artist_name, int total_followers, string genres[AR_LEN], int popularity);

// Delete an artist record
void deleteArtist(ARTIST *a);

// Print an artist record
void printArtist(ARTIST *a);

// Array to Vector TESTING PURPOSES
vector<string> array2vec(string src[AR_LEN]);

#endif
