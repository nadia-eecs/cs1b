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

TEST(hw03test, deleteArtistTest) {
  ARTIST *a1 = nullptr;
  string id = "0du5cEVh5yTK9QJze8zA0C";
  string name = "Bruno Mars";
  int total_followers = 43236735;
  string genre_a[AR_LEN] = {"dance pop", "pop"};
  int popularity = 87;

  a1 = newArtist(id, name, total_followers, genre_a, popularity);
  deleteArtist(a1);

  if(HasFailure()) {
    cerr << "basic deletion of artist struct with data has failed" << endl;
  } else {
    currentPoints_addTest += 10;
  }
  cout << "\nCurrent POINTS:" << currentPoints_addTest << "/" << maxPoints << endl;
}

