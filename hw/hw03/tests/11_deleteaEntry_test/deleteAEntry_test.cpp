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

TEST(hw03test, deleteArtistEntryTest) {
  ARTIST *a1 = nullptr;
  AENTRY *e1 = nullptr;
  string id = "0du5cEVh5yTK9QJze8zA0C";
  string name = "Bruno Mars";
  int total_followers = 43236735;
  string genre_a[AR_LEN] = {"dance pop", "pop"};
  int popularity = 87;

  a1 = newArtist(id, name, total_followers, genre_a, popularity);
  e1 = newArtistEntry(a1);
  a1 = deleteArtistEntry(e1);

  ASSERT_EQ(e1, nullptr) << "\nError in deletion of artist entry from linked list";

  if(HasFailure()) {
    cerr << "deletion of intermediate artistEntry pointing to artist struct of data has failed" << endl;
  } else {
    currentPoints_addTest += 10;
  }
  cout << "\nCurrent POINTS:" << currentPoints_addTest << "/" << maxPoints << endl;
}

