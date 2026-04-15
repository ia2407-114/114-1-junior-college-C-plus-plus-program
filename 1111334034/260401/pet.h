// pet.h
// PET class definition in a separate file from main.
#include <iostream>
#include <string> // class PET uses C++ standard string class
using namespace std;

// GradeBook class definition
class PET
{
public:
   PET( string name, int age );
   ~PET();
   // function that sets the course name
   void setPetName( string name );
   void setPetAge( int age );

   // function that gets the course name
   string getPetName() const;

   int getPetAge() const;

   // function that displays a welcome message
   void displayMessage() const;
private:
   string petName="john"; // course name for this GradeBook
   int petAge=1;
}; // end class GradeBook
