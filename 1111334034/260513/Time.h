// Fig. 10.6: Time.h
// Time class definition with overloaded increment operators.
#ifndef TIME_H
#define TIME_H

#include <iostream>

class Time
{
   friend std::ostream &operator<<(std::ostream &, const Time &);

public:
   Time(int h = 0, int m = 0, int s = 0); // default constructor
   void setTime(int, int, int);           // set hour, minute, second
   Time &operator++();                    // prefix increment operator
   Time operator++(int);                  // postfix increment operator
   Time &operator+=(unsigned int);        // add seconds, modify object
private:
   unsigned int hour;
   unsigned int minute;
   unsigned int second;

   void helpIncrement(); // utility function for incrementing time
}; // end class Time

#endif

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
