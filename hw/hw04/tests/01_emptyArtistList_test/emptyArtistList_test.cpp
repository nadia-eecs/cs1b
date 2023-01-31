#include "gtest/gtest.h"
#include <cmath>
#include "artist.h"
#include "artistList.h"

using namespace std;

int currentPoints_addTest = 0;
int maxPoints = 5;

TEST(hw03test, basicEmptyListTest) {
  ALIST *l = nullptr;
  l = newArtistList();

  if(HasFailure()) {
    cerr << "emptyListTest has failed" << endl;
  }
}

TEST(hw03test, emptyListTest) {
  ALIST *l = nullptr;
  l = newArtistList();
  EXPECT_EQ(l->length, 0) << "\nExpected list length 0" << endl;
  ASSERT_EQ(l->first, nullptr) << "\nExpected nullptr from l->first" << endl;
  ASSERT_EQ(l->last, nullptr) << "\nExpected nullptr from l->last" <<  endl;

  if (HasFailure()) {
    cerr << "\nemptyArtistListTest has failed" << endl;
  } else {
    currentPoints_addTest += 5;
  }
  cout << "\nCurrent POINTS:" << currentPoints_addTest << "/" << maxPoints << endl;
}

