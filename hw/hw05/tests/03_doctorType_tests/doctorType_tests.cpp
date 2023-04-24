#include "gtest/gtest.h"
#include "doctorType.h"

using namespace std;

int currentPoints_doctorTypeTest = 0;
int maxPoints = 10;

TEST(hw05TestsetSpecialty, setSpecialtyTest) {
  doctorType *doctor = new doctorType("Alfred", "Chewbacca", "Neurosurgery");
  EXPECT_EQ(doctor->getSpecialty(), "Neurosurgery");

  if (HasFailure()) {
    cerr << "\nsetSpecialtyTest has failed\"" << endl;
  } else {
    currentPoints_doctorTypeTest += 10;
  }
  cout << "\nCurrent POINTS:" << currentPoints_doctorTypeTest << "/" << maxPoints << endl;
  delete doctor;
  doctor = nullptr;
}
