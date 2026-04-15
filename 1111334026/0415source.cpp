// Fig. 9.5: Date.cpp
// Member-function definitions for class Date.
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Date.h" // include definition of class Date from Date.h
using namespace std;

// Date constructor initializes each data member 
Date::Date(int year, int month, int day)
{
    setDate(year, month, day); // validate and set time
} // end Date constructor

// set new Date value using universal time
void Date::setDate(int y, int m, int d)
{
    setYear(y); // set private field year
    setMonth(m); // set private field month
    setDay(d); // set private field day
} // end function setDate

// set year value
void Date::setYear(int y)
{
    if (y >= 1 && y < 9999)
        year = y;
    else
        throw invalid_argument("year must be 1-9999");
} // end function setYear

// set month value
void Date::setMonth(int m)
{
    if (m >= 1 && m <= 12)
        month = m;
    else
        throw invalid_argument("month must be 1-12");
} // end function setMonth

// set day value
void Date::setDay(int d)
{
    if (d >= 1 && d <= 31)
        day = d;
    else
        throw invalid_argument("day must be 1-31");
} // end function setDay

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

// print Date in universal-time format (HH:MM:SS)
void Date::printUniversal() const
{
    cout << setfill('0') << setw(4) << getYear() << ":"
        << setw(2) << getMonth() << ":" << setw(2) << getDay();
} // end function printUniversal

// print Date in standard-time format (HH:MM:SS AM or PM)
void Date::printStandard() const
{
    cout << (year < 1911 ? "民國前 " : "民國 ") << ((getYear() < 1911) ? 1911 - getYear() : getYear() - 1911)
        << ":" << setfill('0') << setw(2) << getMonth()
        << ":" << setw(2) << getDay();
} // end function printStandard
