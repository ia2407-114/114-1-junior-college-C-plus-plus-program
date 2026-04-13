//Dog.h
#ifndef DOG_H
#define DOG_H
#include <string>

class Dog {
public:
    // 預設建構子與參數化建構子
    Dog();
    Dog(std::string, int, int, int, int, int, int);

    void setDog(std::string, int, int, int, int, int, int);
    void setName(std::string);
    void setBirth(int, int, int);
    void setAdopt(int, int, int);

    std::string getName() const;

    void printUniversal() const;
    void printAge() const;

private:
    std::string name;
    unsigned int byear;
    unsigned int bmonth;
    unsigned int bday;
    unsigned int ayear;
    unsigned int amonth;
    unsigned int aday;
};
#endif
