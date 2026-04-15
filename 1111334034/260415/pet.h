// Fig. 9.19: Employee.h
// Employee class definition showing composition.
// Member functions defined in Employee.cpp.
#ifndef PET_H
#define PET_H

#include <string>
#include "date.h" // include Date class definition

class Pet
{
public:
   Pet( const std::string &, const std::string &,
      const Date &, const Date & );
   void check_birth() const;
   void check_adopt() const;
   void print_all_data() const;
   ~Pet(); // provided to confirm destruction order
private:
   std::string name; // composition: member object
   std::string category; // composition: member object
   const Date birthday; // composition: member object
   const Date adoptDate; // composition: member object
}; // end class Pet

#endif
