// pet.h
#ifndef PET_H
#define PET_H

#include <string>
#include "Date.h"

class Pet
{
public:

    Pet(const std::string& name, const std::string& category, const Date& birthday, const Date& adoptDate);


    ~Pet();


    bool check_birth() const;
    bool check_adopt() const;
    void print_all_data() const;

private:
    std::string name;
    std::string category;
    Date birthday;      
    Date adoptDate;     
};

#endif