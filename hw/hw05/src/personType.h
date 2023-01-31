#ifndef _PERSONTYPE_H
#define _PERSONTYPE_H

#include <iostream>
#include <string>
using namespace std;

class PersonType {
  public:
    void print() const;
    // Function to output the first name and last name
    // in the form firstName lastName.

    void setName(string first, string last);
    // Function to set firstName and lastName according
    // to the parameters.
    // Postcondition: firstName = first; lastName = last

    string getFirstName() const;
    // Function to return the first name.
    // Postcondition: the value of firstName is returned.

    string getLastName() const;
    // Function to return the last name.
    // Postcondition: the value of lastName is returned.

    PersonType(string first = "", string last = "");
    // Constructor
    // Sets firstName and lastName according to the parameters.
    // The default values of the parameters are null strings.
    // Postcondition: firstName = first; lastName - last

  private:
    string firstName; // variable to store the first name
    string lastName;  // variable to store the last name
};


#endif
