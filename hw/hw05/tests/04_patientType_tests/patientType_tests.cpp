#include "gtest/gtest.h"
#include "patientType.h"

using namespace std;

int currentPoints_patientTypeTest = 0;
int maxPoints = 60;

TEST(hw05TestsetInfo, setInfoTest) {
  patientType *patient = new patientType("4677", "Thomas", "William", 7, 29, 2023, "Puja", "Singh", "Neonatal", 12, 14, 2023, 12, 15, 2023);
  patient->setInfo("1234", "Harrison", "Ford", 7, 29, 1945, "Sharon", "Balaclava", "Urology", 10, 24, 2022, 10, 25, 2022);
  EXPECT_EQ(patient->getID(), "1234");
  EXPECT_EQ(patient->getBirthDay(), 29);
  EXPECT_EQ(patient->getBirthMonth(), 7);
  EXPECT_EQ(patient->getBirthYear(), 1945);
  EXPECT_EQ(patient->getDoctorFName(), "Sharon");
  EXPECT_EQ(patient->getDoctorLName(), "Balaclava");
  EXPECT_EQ(patient->getDoctorSpl(), "Urology");
  EXPECT_EQ(patient->getAdmDay(), 24);
  EXPECT_EQ(patient->getAdmMonth(), 10);
  EXPECT_EQ(patient->getAdmYear(), 2022);

  if (HasFailure()) {
    cerr << "\nsetInfoTest has failed\"" << endl;
  } else {
    currentPoints_patientTypeTest += 10;
  }
  cout << "\nCurrent POINTS:" << currentPoints_patientTypeTest << "/" << maxPoints << endl;
  delete patient;
  patient = nullptr;
}


TEST(hw05TestsetID, setIDTest) {
  patientType *patient = new patientType("4677", "Thomas", "William", 7, 29, 2023, "Puja", "Singh", "Neonatal", 12, 14, 2023, 12, 15, 2023);

  patient->setID("7899");
  EXPECT_EQ(patient->getID(), "7899"); 

  if (HasFailure()) {
    cerr << "\nsetIDTest has failed\"" << endl;
  } else {
    currentPoints_patientTypeTest += 10;
  }
  cout << "\nCurrent POINTS:" << currentPoints_patientTypeTest << "/" << maxPoints << endl;
  delete patient;
  patient = nullptr;
}

TEST(hw05TestsetDoctorName, setDoctorNameTest) {
  patientType *patient = new patientType("4677", "Thomas", "William", 7, 29, 2023, "Puja", "Singh", "Neonatal", 12, 14, 2023, 12, 15, 2023);
  
  patient->setDoctorName("Charlie", "Brown");
  EXPECT_EQ(patient->getDoctorFName(), "Charlie");
  EXPECT_EQ(patient->getDoctorLName(), "Brown");


  if (HasFailure()) {
    cerr << "\nsetDoctorNameTest has failed\"" << endl;
  } else {
    currentPoints_patientTypeTest += 10;
  }
  cout << "\nCurrent POINTS:" << currentPoints_patientTypeTest << "/" << maxPoints << endl;
  delete patient;
  patient = nullptr;
}

TEST(hw05setDoctorSpl, setDoctorSplTest) {
  patientType *patient = new patientType("4677", "Thomas", "William", 7, 29, 2023, "Puja", "Singh", "Neonatal", 12, 14, 2023, 12, 15, 2023);
  patient->setDoctorSpl("Opthamology");
  EXPECT_EQ(patient->getDoctorSpl(), "Opthamology");

  if (HasFailure()) {
    cerr << "\nsetDoctorSplTest has failed\"" << endl;
  } else {
    currentPoints_patientTypeTest += 10;
  }
  cout << "\nCurrent POINTS:" << currentPoints_patientTypeTest << "/" << maxPoints << endl;
  delete patient;
  patient = nullptr;
}

TEST(hw05setAdmDate, setAdmDateTest) {
  patientType *patient = new patientType("4677", "Thomas", "William", 7, 29, 2023, "Puja", "Singh", "Neonatal", 12, 14, 2023, 12, 15, 2023);
  patient->setAdmDate(3, 24, 2022);
  EXPECT_EQ(patient->getAdmDay(), 24);
  EXPECT_EQ(patient->getAdmMonth(), 3);
  EXPECT_EQ(patient->getAdmYear(), 2022);

  if (HasFailure()) {
    cerr << "\nsetAdmDateTest has failed\"" << endl;
  } else {
    currentPoints_patientTypeTest += 10;
  }
  cout << "\nCurrent POINTS:" << currentPoints_patientTypeTest << "/" << maxPoints << endl;
  delete patient;
  patient = nullptr;
}

TEST(hw05setDisDate, setDisDateTest) {
  patientType *patient = new patientType("4677", "Thomas", "William", 7, 29, 2023, "Puja", "Singh", "Neonatal", 12, 14, 2023, 12, 15, 2023);
  patient->setDisDate(4, 1, 2021);
  EXPECT_EQ(patient->getDisDay(), 1);
  EXPECT_EQ(patient->getDisMonth(), 4);
  EXPECT_EQ(patient->getDisYear(), 2021);

  if (HasFailure()) {
    cerr << "\nsetIDTest has failed\"" << endl;
  } else {
    currentPoints_patientTypeTest += 10;
  }
  cout << "\nCurrent POINTS:" << currentPoints_patientTypeTest << "/" << maxPoints << endl;
  delete patient;
  patient = nullptr;
}
