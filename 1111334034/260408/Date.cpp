// Date.cpp
// Member-function definitions for class Date.
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Date.h" // include definition of class Date from Date.h
using namespace std;

// Date constructor initializes each data member
Date::Date( int year, int month, int day )
{
   setDate( year, month, day ); // validate and set date
} // end Date constructor

// set new Date value
void Date::setDate( int y, int m, int d )
{
   setYear( y ); // set private field year
   setMonth( m ); // set private field month
   setDay( d ); // set private field day (validated against month/year)
} // end function setDate

// set year value
void Date::setYear( int y )
{
   if ( y >= 1 )
      year = y;
   else
      throw invalid_argument( "year must be >= 1" );
} // end function setYear

// set month value
void Date::setMonth( int m )
{
   if ( m >= 1 && m <= 12 )
      month = m;
   else
      throw invalid_argument( "month must be 1-12" );
} // end function setMonth

// set day value
void Date::setDay( int d )
{
   if ( d >= 1 && d <= daysInMonth( month, year ) )
      day = d;
   else
      throw invalid_argument( "day is out of range for the given month/year" );
} // end function setDay

// check if leap year
bool Date::isLeapYear( int y ) const
{
   return ( y % 4 == 0 && y % 100 != 0 ) || ( y % 400 == 0 );
} // end function isLeapYear

// return number of days in given month and year
int Date::daysInMonth( int m, int y ) const
{
   int days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
   if ( m == 2 && isLeapYear( y ) )
      return 29;
   return days[ m - 1 ];
} // end function daysInMonth

// return year value
unsigned int Date::getYear() const
{
   return year;
} // end function getYear

// return month value
unsigned int Date::getMonth() const
{
   return month;
} // end function getMonth

// return day value
unsigned int Date::getDay() const
{
   return day;
} // end function getDay

// print Date in western format (YYYY/MM/DD)
void Date::printWestern() const
{
   cout << getYear() << "/" << setfill( '0' ) << setw( 2 ) << getMonth()
      << "/" << setw( 2 ) << getDay();
} // end function printWestern

// print Date in ROC format (YYY/MM/DD)
void Date::printROC() const
{
   cout << ( getYear() - 1911 ) << "/" << setfill( '0' ) << setw( 2 )
      << getMonth() << "/" << setw( 2 ) << getDay();
} // end function printROC
