#ifndef PET_H
#define PET_H

#include <iostream>
#include "date.h"
using namespace std;

class pet {
private:
    string name;
    string category;
    date birthday;   // ⭐ Composition
    date adoptDate;  // ⭐ Composition

public:
    pet(string n, string c);

    ~pet();

    void check_birth();
    void check_adopt();
    void print_all_data() const;
};

#endif