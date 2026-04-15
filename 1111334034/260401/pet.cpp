// pet.cpp
// PET class member-function definitions.
#include "pet.h"

PET::PET( string name, int age )
{
   setPetName( name );
   setPetAge( age );
}

PET::~PET()
{
   cout << "Goodbye " << petName << "!" << endl;
}

// function that sets the course name
void PET::setPetName( string name )
{  if(name.length()<=5)
   petName = name; // store the course name in the object
} // end function setCourseName

void PET::setPetAge( int age )
{  if(age>=0&&age<=15)
      	petAge = age; // store the course name in the object
} // end function setCourseName

// function that gets the course name
string PET::getPetName() const
{
   return petName; // return the object's courseName
} // end function getCourseName

int PET::getPetAge() const
{
   return petAge; // return the object's courseName
} // end function getCourseName

// function that displays a welcome message
void PET::displayMessage() const
{
   // this statement calls getCourseName to get the
   // name of the course this GradeBook represents
   cout << "Welcome to see my pet\n" << getPetName() << getPetAge()<< "!"
      << endl;
} // end function displayMessage
