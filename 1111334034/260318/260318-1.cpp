// Fig. 15.13: fig15_13.cpp
// Function template maximum test program.
#include <iostream>
using namespace std;

#include "volume.h" // include definition of function template maximum

int main()
{
   // demonstrate maximum with int values
   int int1, int2, int3;

   // Int
   cout << "Input three integer values: ";
   cin >> int1 >> int2 >> int3;

   cout << " is: "
        << volume(int1, int2, int3);

   // Float
   float float1, float2, float3;

   cout << "\n\nInput three float values: ";
   cin >> float1 >> float2 >> float3;

   cout << " is: "
        << volume(float1, float2, float3);

   // Double
   double double1, double2, double3;

   cout << "\n\nInput three double values: ";
   cin >> double1 >> double2 >> double3;

   cout << " is: "
        << volume(double1, double2, double3);
}

/**************************************************************************
 * (C) Copyright 1992-2015 by Deitel & Associates, Inc. and               *
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
 *************************************************************************/
