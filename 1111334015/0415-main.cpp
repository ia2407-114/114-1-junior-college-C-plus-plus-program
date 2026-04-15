#include <iostream>
#include "pet.h"
using namespace std;

int main() {
    string name, category;
    int y, m, d;

    Pet* pets[3];

    for (int i = 0; i < 3; i++) {
        cout << "=== Pet " << i + 1 << " ===" << endl;

        cout << "Name: ";
        cin >> name;

        cout << "Category: ";
        cin >> category;

        cout << "Birthday (y m d): ";
        cin >> y >> m >> d;
        Date b(y, m, d);

        cout << "Adopt Date (y m d): ";
        cin >> y >> m >> d;
        Date a(y, m, d);

        pets[i] = new Pet(name, category, b, a);
    }

    cout << "\n=== Check Data ===\n";
    for (int i = 0; i < 3; i++) {
        pets[i]->check_birth();
        pets[i]->check_adopt();
        pets[i]->print_all_data();
    }

    for (int i = 0; i < 3; i++) {
        delete pets[i];
    }

    return 0;
}
