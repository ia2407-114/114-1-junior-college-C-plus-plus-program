// Fig. 10.7: Time.cpp
// Time class member- and friend-function definitions.
#include <iostream>
#include <string>
#include "Time.h"
using namespace std;

// initialize static member; one classwide copy



// Time constructor
Time::Time(int hour, int minute, int second)
{
    setTime(hour, minute, second);
} // end Time constructor

// set month, day and year
void Time::setTime(int hh, int mm, int ss)
{
    if (hh >= 0 && hh <= 23)
        hour = hh;
    else
        throw invalid_argument("Hour must be 0-23");

    if (mm >= 0 && mm <= 59)
        minute = mm;
    else
        throw invalid_argument("Minute must be >= 0 and <= 59");

    // test for a leap year
    if (ss >= 0 && ss <= 59)
        second = ss;
    else
        throw invalid_argument(
            "Second must be >= 0 and <= 59");
} // end function setTime

// overloaded prefix increment operator 
Time& Time::operator++()
{
    helpIncrement(); // increment date
    return *this; // reference return to create an lvalue
} // end function operator++


Time Time::operator++(int)
{
    Time temp = *this; // hold current state of object
    helpIncrement();

    // return unincremented, saved, temporary object
    return temp; // value return; not a reference return
} // end function operator++

// add specified number of days to date
Time& Time::operator+=(unsigned int additionalDays)
{
    for (unsigned int i = 0; i < additionalDays; ++i)
        helpIncrement();

    return *this; // enables cascading
} // end function operator+=




// function to help increment the date
void Time::helpIncrement()
{
    if (second < 59) {
        ++second;
    }
    else {
        
        if (minute < 59) {
            ++minute;
            second = 0;
        }
        else {
            
            if (hour < 23) {
                ++hour;
                minute = 0;
                second = 0;
            }
            else {
                hour = 0;
                minute = 0;
                second = 0;
            }
        }
    }
}

// 檢查秒數是否達到進位門檻

// 在 Time.cpp 檔案最後面
ostream& operator<<(ostream& output, const Time& d)
{
    // 原本可能只有 output << d.minute << ":" << d.second;
    // 請改為加上小時 d.hour
    output << d.hour << ":" << d.minute << ":" << d.second;
    return output;
}

