#ifndef PET_H
#define PET_H

#include <string>
#include "date.h"
using namespace std;

class Pet {
private:
    string name;
    string category;
    Date birthday;
    Date adoptDate;

public:
    Pet(string n, string c, Date b, Date a);
    ~Pet();

    void check_birth();
    void check_adopt();
    void print_all_data();
};

#endif#pragma once
