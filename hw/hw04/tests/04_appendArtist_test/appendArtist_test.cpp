#include "gtest/gtest.h"
#include "artist.h"
#include "artistList.h"

using namespace std;

int currentPoints_addTest = 0;
int maxPoints = 10;

bool equalVectorsbyArtistName(vector<ARTIST> a, vector<string> b) {
  if (a.size() != b.size()) return false;
  else {
    for (int i = 0; i < a.size(); i++) {
      if (a[i].artist_name!= b[i]) return false;
    }

  }
  return true;
}

TEST(hw03Test, appendArtistTest) {
  ARTIST *a = nullptr;
  ALIST *l = nullptr;
  string id1 = "0du5cEVh5yTK9QJze8zA0C";
  string name1 = "Bruno Mars";
  int total_followers1 = 43236735;
  string genre_a1[AR_LEN] = {"dance pop", "pop"};
  int popularity1 = 87;

  string id2 = "6XyY86QOPPrYVGvF9ch6wz";
  string name2 = "Linkin Park";
  int total_followers2 = 21735103;
  string genre_a2[AR_LEN] = {"alternative metal", "nu metal", "post-grunge", "rap metal"};
  int popularity2 = 83;

  string id3 = "6XpaIBNiVzIetEPCWDvAFP"; 
  string name3 = "Whitney Houston";
  int total_followers3 = 8378337;
  string genre_a3[AR_LEN] = {"dance pop", "pop", "urban contemporary"};
  int popularity3 = 75;
  
  string id4 = "7guDJrEfX3qb6FEbdPA5qi"; 
  string name4 = "Stevie Wonder";
  int total_followers4 = 5791721;
  string genre_a4[AR_LEN] = {"funk", "indie r&b", "motown", "quiet storm", "soul"};
  int popularity4 = 74;

  l = newArtistList();
  a = newArtist(id1, name1, total_followers1, genre_a1, popularity1);
  appendArtist(l, a);
  a = newArtist(id2, name2, total_followers2, genre_a2, popularity2);
  appendArtist(l, a);
  a = newArtist(id3, name3, total_followers3, genre_a3, popularity3);
  appendArtist(l, a);
  a = newArtist(id4, name4, total_followers4, genre_a4, popularity4);
  appendArtist(l, a);

  vector<string> artist_name{name1, name2, name3, name4};
  vector<ARTIST> ll2vec = linkedList2Vector(l);

  EXPECT_EQ(l->length, 4) << "\nExpect list length of 4 when 4 artist records are added to the artist list.";
  EXPECT_TRUE(equalVectorsbyArtistName(ll2vec, artist_name)) << "\nArtist names are not appended in the correct order.";

  if(HasFailure()) {
    cerr << "Artist linked list construction with append has failed" << endl;
  } else {
    currentPoints_addTest += 10;
  }
  cout << "\nCurrent POINTS:" << currentPoints_addTest << "/" << maxPoints << endl;
}
