#include <iostream>
#include "pet.h"

using namespace std;
Pet::Pet(string name, int age) {
    setPetName(name);
    setPetAge(age);
    cout << "Pet object for [" << petName << "] has been created." << endl;
}

Pet::~Pet() {
    cout << "Goodbye, " << petName << "! (Destructor called)" << endl;
}

void Pet::setPetName(string name) {
    if (name.length() <= 10) {
        petName = name;
    }
    else {
        petName = name.substr(0, 10);
        cout << "Name \"" << name << "\" exceeds 10 chars, truncated to " << petName << endl;
    }
}

string Pet::getPetName() const {
    return petName;
}

void Pet::setPetAge(int age) {
    if (age >= 0 && age <= 15) {
        petAge = age;
    }
    else {
        petAge = 0;
        cout << "Invalid age! Setting " << petName << "'s age to 0." << endl;
    }
}

int Pet::getPetAge() const {
    return petAge;
}

void Pet::displayMessage() const {
    cout << "Welcome to see my pet! Name: " << getPetName()
        << ", Age: " << getPetAge() << endl;
}