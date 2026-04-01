#ifndef PET_H
#define PET_H

#include <string>
using namespace std;

class Pet {
private:
    string name;
    int age;

public:
    // 建構元 & 解構元
    Pet(string n, int a);
    ~Pet();

    // set functions
    void setName(string n);
    void setAge(int a);

    // get function
    void getInfo();
};

#endif
