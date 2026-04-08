// Fig. 9.6: fig09_06.cpp 
// Constructor with default arguments.
#include <iostream>
#include <stdexcept>
#include "Date.h" // include definition of class Date from Date.h
using namespace std;

int main()
{
    Date t1; // all arguments defaulted
    Date t2(2); // hour specified; minute and second defaulted
    Date t3(21, 34); // hour and minute specified; second defaulted 
    Date t4(12, 25, 42); // hour, minute and second specified

    cout << "Constructed with:\n\nt1: all arguments defaulted\n  ";
    t1.printUniversal(); 
    cout << "\n  ";
    t1.printStandard();

    cout << "\n\nt2: \n  ";
    t2.printUniversal(); 
    cout << "\n  ";
    t2.printStandard(); 

    cout << "\n\nt3:\n  ";
    t3.printUniversal();
    cout << "\n  ";
    t3.printStandard(); 

    cout << "\n\nt4:\n  ";
    t4.printUniversal(); 
    cout << "\n  ";
    t4.printStandard(); 

 
    cout << "\n";
    cout << "\n";
        Date t5(27, 74, 99); 
        cout << "\n";
  
} // end main

