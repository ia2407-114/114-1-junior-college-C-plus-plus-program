#include <iostream>
#include "pet.h" 
#include "Date.h" 
using namespace std;

PET::PET(const string& first, const string& last,
    const Date& dateOfBirth, const Date& dateOfHire)
    : Name(first), // initialize name
    category(last), // initialize category
    birthDate(dateOfBirth), // initialize birthDate
    adoptDate(dateOfHire) // initialize adoptDate
{
    
    cout << "PET object constructor: "
        << Name << ' ' << category << endl;
} 

void PET::print() const
{
    cout << Name << ", " << "  Category:" << category ;
    
    cout << "  Birthday: ";
    birthDate.printUniversal();
    cout << "  Adoption: ";
    adoptDate.printUniversal();
    cout << endl;
} // end function print

PET::~PET()
{
    print();
    cout << "PET object destructor: "
        << category << ", " << Name << endl;

} 
