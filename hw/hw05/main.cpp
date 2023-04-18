 
#include <iostream>
#include <string>
#include "patientType.h"
#include "billType.h"

using namespace std;

int main()
{
    patientType newPatient;
    billType bill;

    string str1, str2, str3; 

    cout << "Enter patient's ID: ";
    cin >> str1;
    cout << endl;

    newPatient.setID(str1);
    bill.setID(str1);

    cout <<"Enter patient's first name: ";
    cin >> str1;
    cout << endl;

    cout << "Enter patient's last name: ";
    cin >> str2;
    cout << endl;

    newPatient.setName(str1, str2);

    cout <<"Enter doctor's first name: ";
    cin >> str1;
    cout << endl;

    cout << "Enter doctor's last name: ";
    cin >> str2;
    cout << endl;

    newPatient.setDoctorName(str1, str2);

    cout << "Enter doctor's speciality: ";
    cin >> str1;
    cout << endl;

    newPatient.setDoctorSpl(str1);

    newPatient.setAdmDate(4, 15, 2009);
    newPatient.setDisDate(4, 21, 2009);

    bill.setPharmacyCharges(245.50);
    bill.setRoomRent(2500);
    bill.setDoctorFee(3500.38);

    newPatient.print();
    bill.printBill();
    
    return 0;
}
