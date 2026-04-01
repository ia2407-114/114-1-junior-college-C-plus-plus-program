#include <iostream>
#include "pet.h"

using namespace std;

// 實作建構元，這裡我們直接呼叫 setter 來確保資料符合規範
Pet::Pet(string name, int age) {
    setPetName(name);
    setPetAge(age);
    cout << "Pet object for [" << petName << "] has been created." << endl;
}

// 實作解構元
Pet::~Pet() {
    cout << "Goodbye, " << petName << "! (Destructor called)" << endl;
}

void Pet::setPetName(string name) {
    if (name.length() <= 10) { // 放寬長度限制以便測試
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
        petAge = 0; // 預設值
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