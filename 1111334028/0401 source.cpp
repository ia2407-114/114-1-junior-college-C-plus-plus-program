#include <iostream>
#include "pet.h"
using namespace std;

int main() {
    Pet pet1("Mimi", 5);
    Pet pet2("Bob", 19 ); 

    pet1.getInfo();
    pet2.getInfo();

    return 0;
}
