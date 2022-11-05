// ArtistList.h: header file for artist linked list logistics

#ifndef _ARTISTLIST_H_
#define _ARTISTLIST_H_

#include "artist.h"

typedef struct ArtistList ALIST;
typedef struct ArtistEntry AENTRY;

struct ArtistList {
  int length;
  AENTRY *first;
  AENTRY *last;
};

struct ArtistEntry {
  ALIST *list;
  AENTRY *next;
  AENTRY *prev;
  ARTIST *artist;
};

// Allocate a new artist list
ALIST *newArtistList();

// Allocate new artist entry
AENTRY *newArtistEntry(ARTIST *a);

// Delete an artist entry
ARTIST *deleteArtistEntry(AENTRY *e);

// Delete an artist list (and all entries)
void deleteArtistList(ALIST *l);

// prepend/append an artist at the beginning/end of list
void prependArtist(ALIST *l, ARTIST *a);
void appendArtist(ALIST *l, ARTIST *a);

// insert an artist before/after an existing one
void insertArtistBefore(AENTRY *e, ARTIST *a);
void insertArtistAfter(AENTRY *e, ARTIST *a);

// remove the first/last artist from the list
void removeFirstArtist(ALIST *l);
void removeLastArtist(ALIST *l);

// print an artist list
void printArtistList(ALIST *l);

// find an artist by name in an unsorted list
ARTIST *findArtistName(ALIST *l, string name);

// remove an artist by name in an unsorted list
void removeArtistbyName(ALIST *l, string name);

// doubly linked list to vector conversion for testing purposes
vector<ARTIST> linkedList2Vector(ALIST *l);

#endif

