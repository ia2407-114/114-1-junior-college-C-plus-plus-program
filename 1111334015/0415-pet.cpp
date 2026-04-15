#include <iostream>
#include "pet.h"
using namespace std;

Pet::Pet(string n, string c, Date b, Date a)
    : name(n), category(c), birthday(b), adoptDate(a) {}

Pet::~Pet() {
    cout << name << ": Bye Bye~~" << endl;
}

void Pet::check_birth() {
    cout << name << " birthday: ";
    birthday.printAD();
}

void Pet::check_adopt() {
    cout << name << " adopt date: ";
    adoptDate.printAD();
}

void Pet::print_all_data() {
    cout << "Name: " << name << endl;
    cout << "Category: " << category << endl;

    cout << "Birthday -> ";
    birthday.printAD();

    cout << "Adopt Date -> ";
    adoptDate.printAD();

    cout << "----------------------" << endl;
}
