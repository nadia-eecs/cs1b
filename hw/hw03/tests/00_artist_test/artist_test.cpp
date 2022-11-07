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

TEST(hw03test, artistTest) {
  ARTIST *a1 = nullptr;
  string id = "0du5cEVh5yTK9QJze8zA0C";
  string name = "Bruno Mars";
  int total_followers = 43236735;
  string genre_a[AR_LEN] = {"dance pop", "pop"};
  int popularity = 87;

  a1 = newArtist(id, name, total_followers, genre_a, popularity);

  EXPECT_EQ(a1->artist_id, id) << "\nartist_id was not populated in artist struct correctly";
  EXPECT_EQ(a1->artist_name, name) << "\nartist_name was not populated in artist struct correctly";
  EXPECT_EQ(a1->total_followers, total_followers) << "\ntotal_followers was not populated in artist struct correctly";
  EXPECT_TRUE(equalVectors(array2vec(a1->genres), array2vec(genre_a))) << "\ngenres was not populated in artist struct correctly";

  if(HasFailure()) {
    cerr << "initialization of artist struct with data has failed" << endl;
  } else {
    currentPoints_addTest += 10;
  }
  cout << "\nCurrent POINTS:" << currentPoints_addTest << "/" << maxPoints << endl;
}

