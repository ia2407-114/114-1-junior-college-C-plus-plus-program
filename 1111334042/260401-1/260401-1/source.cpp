

#include <iostream>
#include <string>
#include "pet.h"

using namespace std;

int main() {
    cout << "--- Creating first pet ---" << endl;
    Pet pet1("Buddy", 3);
    pet1.displayMessage();

    cout << "\n--- Creating second pet ---" << endl;
    Pet pet2("bob", 0);

    pet2.displayMessage();

    cout << "\n--- Program ending soon ---" << endl;

    return 0;
}