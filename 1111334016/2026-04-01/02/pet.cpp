


#include"pet.h"
PET::PET(string name, int age) {
    petName = name;
    petAge = age;
}
PET::~PET() {
    cout << "Bye Bye my pet" << endl;
}


void PET::setPetName(string name)
{
    if (name.length() <= 5)
        petName = name; 
} 
void PET::setPetAge(int age)
{
    if (age >= 0 && age <= 15)
        petAge = age; 
} 
string PET::getPetName() const
{
    return petName; 
} 

int PET::getPetAge() const
{
    return petAge; 
} 

void PET::displayMessage() const
{
    cout << "Welcome to see my pet " << getPetName() << "Its name is " << getPetAge() << " years old!"
        << endl;
} 
