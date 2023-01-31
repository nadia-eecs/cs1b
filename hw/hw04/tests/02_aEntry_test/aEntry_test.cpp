#include "gtest/gtest.h"
#include "artist.h"
#include "artistList.h"

using namespace std;

int currentPoints_addTest = 0;
int maxPoints = 10;

template<class T>
bool equalVectors(vector<T> a, vector<T> b) {
  a.shrink_to_fit();
  b.shrink_to_fit();
  if (a.size() != b.size()) return false;
  else {
    for (int i = 0; i < a.size(); ++i) {
      if(a[i] != b[i]) return false;
    }
  }
  return true;
}

TEST(hw03test, artistEntryTest) {
  ARTIST *a1 = nullptr;
  AENTRY *e1 = nullptr;
  string id = "0du5cEVh5yTK9QJze8zA0C";
  string name = "Bruno Mars";
  int total_followers = 43236735;
  string genre_a[AR_LEN] = {"dance pop", "pop"};
  int popularity = 87;

  a1 = newArtist(id, name, total_followers, genre_a, popularity);
  e1 = newArtistEntry(a1);

  EXPECT_EQ(e1->artist->artist_id, id) << "\nartist_id was not populated in artist struct correctly";
  EXPECT_EQ(e1->artist->artist_name, name) << "\nartist_name was not populated in artist struct correctly";
  EXPECT_EQ(e1->artist->total_followers, total_followers) << "\ntotal_followers was not populated in artist struct correctly";
  EXPECT_TRUE(equalVectors(array2vec(e1->artist->genres), array2vec(genre_a))) << "genres was not populated in artist struct correctly";
  ASSERT_EQ(e1->list, nullptr) << "\nExpected nullptr from e1->list since it hasn't been attached to an artist list yet";
  ASSERT_EQ(e1->next, nullptr) << "\nExpected nullptr from e1->next since there is only one entry and it is not attached to a list";
  ASSERT_EQ(e1->prev, nullptr) << "\nExpected nullptr from e1->prev since there is only one entry and it is not attached to a list";

  if(HasFailure()) {
    cerr << "creation of intermediate artistEntry to use with artist struct with data has failed" << endl;
  } else {
    currentPoints_addTest += 10;
  }
  cout << "\nCurrent POINTS:" << currentPoints_addTest << "/" << maxPoints << endl;
}

