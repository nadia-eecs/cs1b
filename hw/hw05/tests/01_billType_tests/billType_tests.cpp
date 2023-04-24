#include "gtest/gtest.h"
#include "billType.h"

using namespace std;

int currentPoints_billTypeTests = 0;
int maxPoints = 90;

TEST(hw05Test_billingAmount, billingAmountTest) {
  billType *bill = new billType("12345", 35.68, 1500, 750);
  EXPECT_FLOAT_EQ(bill->billingAmount(), 2285.68);

  if (HasFailure()) {
    cerr << "\nbillingAmountTest has failed\"" << endl;
  } else {
    currentPoints_billTypeTests += 10;
  }
  cout << "\nCurrent POINTS:" << currentPoints_billTypeTests << "/" << maxPoints << endl;
  delete bill;
  bill = nullptr;
}

TEST(hw05Test_setInfo, setInfoTest) {
  billType *bill = new billType("22233", 45.79, 890, 430);
  bill->setInfo("55555", 97.72, 1084, 540);
  EXPECT_EQ(bill->getID(), "5555");
  EXPECT_FLOAT_EQ(bill->getPharmacyCharges(), 97.72);
  EXPECT_FLOAT_EQ(bill->getRoomRent(), 1084);
  EXPECT_FLOAT_EQ(bill->getDoctorFee(), 97.72);

  if(HasFailure()) {
    cerr << "\nsetInfoTest has failed\"" << endl;
  } else {
    currentPoints_billTypeTests += 10;
  }
  cout << "\nCurrent POINTS:" << currentPoints_billTypeTests << "/" << maxPoints << endl;
  delete bill;
  bill = nullptr;
}

TEST(hw05Test_setID, setIDTest) {
  billType *bill = new billType("22233", 45.79, 890, 430);
  bill->setID("00000");
  EXPECT_EQ(bill->getID(), "00000");

  if(HasFailure()) {
    cerr << "\nsetIDTest has failed\"" << endl;
  } else {
    currentPoints_billTypeTests += 10;
  }
  cout << "\nCurrent POINTS:" << currentPoints_billTypeTests << "/" << maxPoints << endl;
  delete bill;
  bill = nullptr;
}

TEST(hw05Test_setPharmacyCharges, setPharmacyChargesTest) {
  billType *bill = new billType("22222", 33.00, 1000, 760);
  bill->setPharmacyCharges(89.90);
  EXPECT_FLOAT_EQ(bill->getPharmacyCharges(), 89.90);

  if(HasFailure()) {
    cerr << "\nsetPharmacyChargesTest has failed\"" << endl;
  } else {
    currentPoints_billTypeTests += 10;
  }
  cout << "\nCurrent POINTS:" << currentPoints_billTypeTests << "/" << maxPoints << endl;
  delete bill;
  bill = nullptr;
}

TEST(hw05Test_updatePharmacyCharges, updatePharmacyChargesTest) {
  billType *bill = new billType("11111", 10.00, 250, 150);
  bill->updatePharmacyCharges(12.00);
  EXPECT_FLOAT_EQ(bill->getPharmacyCharges(), 22.00);

  if(HasFailure()) {
    cerr << "\nupdatePharmacyChargesTest has failed\"" << endl;
  } else {
    currentPoints_billTypeTests += 10;
  }
  cout << "\nCurrent POINTS:" << currentPoints_billTypeTests << "/" << maxPoints << endl;
  delete bill;
  bill = nullptr;
}

TEST(hw05Test_setRoomRent, setRoomRentTest) {
  billType *bill = new billType("10000", 14.50, 100, 75);
  bill->setRoomRent(150);
  EXPECT_FLOAT_EQ(bill->getRoomRent(), 150);

  if(HasFailure()) {
    cerr << "\nsetRoomRentTest has failed\"" << endl;
  } else {
    currentPoints_billTypeTests += 10;
  }
  cout << "\nCurrent Points:" << currentPoints_billTypeTests << "/" << maxPoints << endl;
  delete bill;
  bill = nullptr;
}

TEST(hw05Test_updateRoomRent, updateRoomRentTest) {
  billType *bill = new billType("20031", 7.80, 44, 200);
  bill->updateRoomRent(25);
  EXPECT_FLOAT_EQ(bill->getRoomRent(), 69);

  if(HasFailure()) {
    cerr << "\nupdateRoomRentTest has failed\"" << endl;
  } else {
    currentPoints_billTypeTests += 10;
  }
  cout << "\nCurrent Points:" << currentPoints_billTypeTests << "/" << maxPoints << endl;
  delete bill;
  bill = nullptr;
}

TEST(hw05Test_setDoctorFee, setDoctorFeeTest) {
  billType *bill = new billType("67890", 78.43, 32.00, 17.00);
  bill->setDoctorFee(300.50);
  EXPECT_FLOAT_EQ(bill->getDoctorFee(), 300.50);

  if(HasFailure()) {
    cerr << "\nsetDoctorFeeTest has failed\"" << endl;
  } else {
    currentPoints_billTypeTests += 10;
  }
  cout << "\nCurrent Points:" << currentPoints_billTypeTests << "/" << maxPoints << endl;
  delete bill;
  bill = nullptr;
}

TEST(hw05Test_updateDoctorFee, updateDoctorFeeTest) {
  billType *bill = new billType("64324", 6.75, 25.00, 43.00);
  bill->updateDoctorFee(210.00);
  EXPECT_FLOAT_EQ(bill->getDoctorFee(), 253.00);

  if(HasFailure()) {
    cerr << "\nupdateDoctorFeeTest has failed\"" << endl;
  } else {
    currentPoints_billTypeTests += 10;
  }
  cout << "\nCurrent Points:" << currentPoints_billTypeTests << "/" << maxPoints << endl;
  delete bill;
  bill = nullptr;
}
