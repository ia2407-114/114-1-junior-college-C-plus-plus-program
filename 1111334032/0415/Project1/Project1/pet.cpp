#include "pet.h"

pet::pet(string n, string c) {
    name = n;
    category = c;
}

pet::~pet() {
    cout << name << " says: Bye Bye~~" << endl;
}

void pet::check_birth() {
    int y, m, d;
    cout << "Enter " << name << "'s birthday (y m d)): ";
    cin >> y >> m >> d;
    birthday.setDate(y, m, d);
}

void pet::check_adopt() {
    int y, m, d;
    cout << "Enter " << name << "'s adopt date (y m d): ";
    cin >> y >> m >> d;
    adoptDate.setDate(y, m, d);
}

void pet::print_all_data() const {
    cout << "Name: " << name << endl;
    cout << "Category: " << category << endl;

    cout << "Birthday: 民國 ";
    birthday.printDate();
    cout << endl;

    cout << "Adopt Date: 民國";
    adoptDate.printDate();
    cout << endl;

    cout << "----------------------" << endl;
}