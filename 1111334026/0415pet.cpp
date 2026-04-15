// Fig. 9.20: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
#include "pet.h" // Employee class definition
#include "Date.h" // Date class definition

using namespace std;

// constructor uses member initializer list to pass initializer 
// values to constructors of member objects  
Pet::Pet(const string& first, const string& last,
    const Date& dateOfBirth, const Date& dateOfHire)
    : firstName(first), // initialize firstName
    category(last), // initialize category
    birthDate(dateOfBirth), // initialize birthDate
    adoptDate(dateOfHire) // initialize adoptDate
{
    // output Employee object to show when constructor is called
    cout << "Pet object constructor: "
        << firstName << ' ' << category << endl;
} // end Employee constructor

// print Employee object
void Pet::print() const
{
    cout << category << ", " << firstName << "  Hired: ";
    adoptDate.printUniversal();
    adoptDate.printStandard();
    cout << "  Birthday: ";
    birthDate.printUniversal();
    birthDate.printStandard();
    cout << endl;
} // end function print

// output Employee object to show when its destructor is called
Pet::~Pet()
{
    print();
    cout << "Pet object destructor: "
        << category << ", " << firstName << endl;
} // end ~Employee destructor

