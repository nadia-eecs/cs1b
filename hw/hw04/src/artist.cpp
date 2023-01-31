// artist.cpp: function definitions file for artist.h

#include "artist.h"

// Array to Vector TESTING PURPOSES DO NOT MODIFY
vector<string> array2vec(string src[AR_LEN]) {
  vector<string> dest;
  for (int i = 0; i < AR_LEN; ++i) dest.push_back(src[i]);
  return dest;
}

