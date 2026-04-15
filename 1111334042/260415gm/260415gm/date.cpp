// Date.cpp
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Date.h"

using namespace std;

Date::Date(int year, int month, int day)
{
    setDate(year, month, day);
}

void Date::setDate(int y, int m, int d)
{
    setYear(y);
    setMonth(m);
    setDay(d);
}

void Date::setYear(int y)
{
    if (y >= 1 && y <= 9999)
        year = y;
    else
        throw invalid_argument("年份必須介於 1-9999 之間");
}

void Date::setMonth(int m)
{
    if (m > 0 && m <= 12)
        month = m;
    else
        throw invalid_argument("月份必須介於 1-12 之間");
}

void Date::setDay(int d)
{
    if (d > 0 && d <= 31)
        day = d;
    else
        throw invalid_argument("日期必須介於 1-31 之間");
}

unsigned int Date::getYear() const { return year; }
unsigned int Date::getMonth() const { return month; }
unsigned int Date::getDay() const { return day; }

void Date::printUniversal() const
{
    cout << setfill('0') << setw(4) << getYear() << "/"
        << setw(2) << getMonth() << "/" << setw(2) << getDay();
}

void Date::printStandard() const
{
    cout << (year < 1911 ? "民國前 " : "民國 ")
        << (getYear() > 1911 ? year - 1911 : 1911 - year)
        << "/" << setfill('0') << setw(2) << getMonth()
        << "/" << setw(2) << getDay();
}