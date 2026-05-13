// Fig. 10.7: Time.cpp
// Time class member- and friend-function definitions.
#include <iostream>
#include <iomanip>
#include <string>
#include "Time.h"
using namespace std;

// Time constructor
Time::Time(int hour, int minute, int second)
{
   setTime(hour, minute, second);
} // end Time constructor

// set hour, minute and second
void Time::setTime(int hh, int mm, int ss)
{
   if (hh >= 0 && hh <= 23)
      hour = hh;
   else
      throw invalid_argument("Hour must be 0-23");

   if (mm >= 0 && mm <= 59)
      minute = mm;
   else
      throw invalid_argument("Minute must be 0-59");

   if (ss >= 0 && ss <= 59)
      second = ss;
   else
      throw invalid_argument("Second must be 0-59");
} // end function setTime

// overloaded prefix increment operator
Time &Time::operator++()
{
   helpIncrement(); // increment time
   return *this;    // reference return to create an lvalue
} // end function operator++

// overloaded postfix increment operator; note that the
// dummy integer parameter does not have a parameter name
Time Time::operator++(int)
{
   Time temp = *this; // hold current state of object
   helpIncrement();

   // return unincremented, saved, temporary object
   return temp; // value return; not a reference return
} // end function operator++

// add specified number of seconds to time
Time &Time::operator+=(unsigned int additionalSeconds)
{
   for (int i = 0; i < additionalSeconds; ++i)
      helpIncrement();

   return *this; // enables cascading
} // end function operator+=

// function to help increment the time
void Time::helpIncrement()
{
   if (second < 59)
      ++second; // increment second
   else
   {
      second = 0;      // reset second
      if (minute < 59) // second overflow, minute < 59
      {
         ++minute; // increment minute
      } // end if
      else // minute overflow
      {
         minute = 0;    // reset minute
         if (hour < 23) // minute overflow, hour < 23
            ++hour;     // increment hour
         else
            hour = 0; // reset to midnight
      } // end else
   } // end else
} // end function helpIncrement

// overloaded output operator
ostream &operator<<(ostream &output, const Time &t)
{
   output << t.hour << ":"
          << setw(2) << setfill('0') << t.minute << ":"
          << setw(2) << setfill('0') << t.second;
   return output; // enables cascading
} // end function operator<<

/**************************************************************************
 * (C) Copyright 1992-2014 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/
