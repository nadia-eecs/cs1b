#include "gtest/gtest.h"
#include "billType.h"

using namespace std;

int currentPoints_constructorTest = 0;
int maxPoints = 40;

TEST(hw05TestbillType, basicConstructorbillType) {
  billType *bill = new billType("12345", 67.59, 3500, 900);

  if (HasFailure()){
    cerr << "\nbillType Constructor Test has failed\"" << endl;
  }else {
    currentPoints_constructorTest += 10;
  }

  cout << "\nCurrent POINTS:" << currentPoints_constructorTest << "/" << maxPoints << endl;
  delete bill;
  bill = nullptr;

}

TEST(hw05TestdateType, basicConstructordateType) {
  dateType *date = new dateType(4, 18, 2023);

  if (HasFailure()){
    cerr << "\ndateType Constructor Test has failed\"" << endl;
  }else {
    currentPoints_constructorTest += 10;
  }

  cout << "\nCurrent POINTS:" << currentPoints_constructorTest << "/" << maxPoints << endl;
  delete date;
  date = nullptr;
}

TEST(hw05TestdoctorType, basicConstructordoctorType) {
  doctorType *doctor = new doctorType("Bob", "Doe", "Cardiology");

  if (HasFailure()){
    cerr << "\ndoctorType Constructor Test has failed\"" << endl;
  }else {
    currentPoints_constructorTest += 10;
  }

  cout << "\nCurrent POINTS:" << currentPoints_constructorTest << "/" << maxPoints << endl;
  delete doctor;
  doctor = nullptr;

}

TEST(hw05TestpatientType, basicConstructorpatientType) {
  patientType *patient = new patientType("55523", "Fred", "Wilbur", 3, 24, 1976, "Joseph", "McLauren", "Nephrology", 24, 5, 2023, 26, 5, 2023);

  if (HasFailure()){
    cerr << "\npatientType Constructor Test has failed\"" << endl;
  }else {
    currentPoints_constructorTest += 10;
  }

  cout << "\nCurrent POINTS:" << currentPoints_constructorTest << "/" << maxPoints << endl;
  delete patient;
  patient = nullptr;

}
