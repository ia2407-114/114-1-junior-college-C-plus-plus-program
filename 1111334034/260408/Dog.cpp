// Dog.cpp
// Member-function definitions for class Dog.
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Dog.h" // include definition of class Dog from Dog.h
using namespace std;

// today's date for age validation
const int TODAY_YEAR  = 2026;
const int TODAY_MONTH = 4;
const int TODAY_DAY   = 8;

// Dog constructor initializes each data member
Dog::Dog( string n,
   int bYear, int bMonth, int bDay,
   int aYear, int aMonth, int aDay )
{
   setName( n );
   setBirthday( bYear, bMonth, bDay ); // validate and set birthday
   setAdoptDate( aYear, aMonth, aDay ); // validate and set adopt date
} // end Dog constructor

// set name value
void Dog::setName( string n )
{
   if ( !n.empty() )
      name = n;
   else
      throw invalid_argument( "name cannot be empty" );
} // end function setName

// set birthday
void Dog::setBirthday( int y, int m, int d )
{
   if ( !isValidDate( y, m, d ) )
      throw invalid_argument( "birthday is not a valid date" );

   // birthday must not be in the future
   if ( y > TODAY_YEAR || ( y == TODAY_YEAR && m > TODAY_MONTH ) ||
      ( y == TODAY_YEAR && m == TODAY_MONTH && d > TODAY_DAY ) )
      throw invalid_argument( "birthday cannot be in the future" );

   // dog age must be 0-20 years
   int minYear = TODAY_YEAR - 20;
   int minMonth = TODAY_MONTH;
   int minDay = TODAY_DAY;
   if ( y < minYear || ( y == minYear && m < minMonth ) ||
      ( y == minYear && m == minMonth && d < minDay ) )
      throw invalid_argument( "dog age exceeds 20 years" );

   birthYear  = y;
   birthMonth = m;
   birthDay   = d;
} // end function setBirthday

// set adopt date
void Dog::setAdoptDate( int y, int m, int d )
{
   if ( !isValidDate( y, m, d ) )
      throw invalid_argument( "adopt date is not a valid date" );

   // adopt date must not be in the future
   if ( y > TODAY_YEAR || ( y == TODAY_YEAR && m > TODAY_MONTH ) ||
      ( y == TODAY_YEAR && m == TODAY_MONTH && d > TODAY_DAY ) )
      throw invalid_argument( "adopt date cannot be in the future" );

   // adopt date must be on or after birthday
   if ( y < birthYear || ( y == birthYear && m < birthMonth ) ||
      ( y == birthYear && m == birthMonth && d < birthDay ) )
      throw invalid_argument( "adopt date cannot be before birthday" );

   adoptYear  = y;
   adoptMonth = m;
   adoptDay   = d;
} // end function setAdoptDate

// check if leap year
bool Dog::isLeapYear( int y ) const
{
   return ( y % 4 == 0 && y % 100 != 0 ) || ( y % 400 == 0 );
} // end function isLeapYear

// return number of days in given month and year
int Dog::daysInMonth( int m, int y ) const
{
   int days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
   if ( m == 2 && isLeapYear( y ) )
      return 29;
   return days[ m - 1 ];
} // end function daysInMonth

// check if date is valid
bool Dog::isValidDate( int y, int m, int d ) const
{
   if ( y < 1 ) return false;
   if ( m < 1 || m > 12 ) return false;
   if ( d < 1 || d > daysInMonth( m, y ) ) return false;
   return true;
} // end function isValidDate

// return name value
string Dog::getName() const { return name; }
unsigned int Dog::getBirthYear() const { return birthYear; }
unsigned int Dog::getBirthMonth() const { return birthMonth; }
unsigned int Dog::getBirthDay() const { return birthDay; }
unsigned int Dog::getAdoptYear() const { return adoptYear; }
unsigned int Dog::getAdoptMonth() const { return adoptMonth; }
unsigned int Dog::getAdoptDay() const { return adoptDay; }

// print dog info
void Dog::printInfo() const
{
   cout << "姓名: " << getName() << "\n";
   cout << "生日: " << getBirthYear() << "/" << setfill( '0' )
      << setw( 2 ) << getBirthMonth() << "/" << setw( 2 ) << getBirthDay() << "\n";
   cout << "領養日: " << getAdoptYear() << "/" << setfill( '0' )
      << setw( 2 ) << getAdoptMonth() << "/" << setw( 2 ) << getAdoptDay() << "\n";
} // end function printInfo
