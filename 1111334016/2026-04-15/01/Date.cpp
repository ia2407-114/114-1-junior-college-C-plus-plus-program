#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Date.h" // include definition of class Date from Date.h
using namespace std;
Date::Date(int year, int month, int day) : year(1990), month(1), day(1)
{
    setDate(year, month, day); // validate and set time
} 

void Date::setDate(int y, int m, int d)
{
    setYear(y); 
    setMonth(m); 
    setDay(d); 
} 
void Date::setYear(int y)
{
    if (y >= 1 && y < 9999)
        year = y;
    else
        cout << "year must be 1-9999\n" << endl;
} 


void Date::setMonth(int m)
{
    if (m >= 1 && m <= 12)
        month = m;
    else
        cout << "month must be 1-12\n";
} 


void Date::setDay(int d)
{
    if (d >= 1 && d <= 31)
        day = d;
    else
        cout << "day must be 1-31\n";
}


unsigned int Date::getYear() const
{
    return year;
}

unsigned int Date::getMonth() const
{
    return month;
} 


unsigned int Date::getDay() const
{
    return day;
} 

void Date::printUniversal() const
{
    cout << setfill('0') << setw(4) << getYear() << ":"
        << setw(2) << getMonth() << ":" << setw(2) << getDay();
} 
void Date::printStandard() const
{
    cout << (getYear() < 1911 ? "民國前" : "民國") << ((getYear() < 1911) ? 1911 - getYear() : getYear() - 1911) << ":"
        << setfill('0') << setw(2) << getMonth()
        << ":" << setw(2) << getDay();
}
