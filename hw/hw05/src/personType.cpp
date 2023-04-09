#include "personType.h"

void PersonType::print() const {
  cout << firstName << " " << lastName;
}

void PersonType::setName(string first, string last) {
  firstName = first;
  lastName = last;
}

string PersonType::getFirstName() const {
  return firstName;
}

string PersonType::getLastName() const {
  return lastName;
}

PersonType::PersonType(string first, string last) : firstName(first), lastName(last) {

}
