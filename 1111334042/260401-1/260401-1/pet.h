#ifndef PET_H
#define PET_H

#include <string>

class Pet {
public:
    Pet(std::string name, int age);
    ~Pet();
    void setPetName(std::string name);
    std::string getPetName() const;
    void setPetAge(int age);
    int getPetAge() const;
    void displayMessage() const;

private:
    std::string petName;
    int petAge;
};

#endif#pragma once
