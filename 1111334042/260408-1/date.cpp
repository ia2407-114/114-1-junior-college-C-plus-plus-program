// Date.cpp
#include <iostream>
#include <iomanip>
#include <stdexcept> 
#include "Date.h"    

using namespace std;


Date::Date(int y, int m, int d)
{
    setDate(y, m, d);
}


void Date::setDate(int y, int m, int d)
{
    if (y >= 1) 
        year = y;
    else
        throw invalid_argument("年份必須大於0");

    if (m >= 1 && m <= 12) 
        month = m;
    else
        throw invalid_argument("月份必須介於 1 到 12 之間");

    day = checkDay(year, month, d);
}


void Date::printGregorian() const
{
    cout << year << "/"
        << setfill('0') << setw(2) << month << "/"
        << setfill('0') << setw(2) << day;
}

void Date::printMinguo() const
{
    int minguoYear = year - 1911;
    cout << "民國 " << minguoYear << "年 "
        << setfill('0') << setw(2) << month << "月 "
        << setfill('0') << setw(2) << day << "日";
}

bool Date::isLeapYear(int testYear) const
{
    return (testYear % 400 == 0 ||
        (testYear % 100 != 0 && testYear % 4 == 0));
}


int Date::checkDay(int testYear, int testMonth, int testDay) const
{

    static const int daysPerMonth[13] =
    { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };


    if (testDay > 0 && testDay <= daysPerMonth[testMonth])
        return testDay;

    if (testMonth == 2 && testDay == 29 && isLeapYear(testYear))
        return testDay;
    throw invalid_argument("輸入的日期在該月份中無效 (例如: 該月沒有這一天)");
}