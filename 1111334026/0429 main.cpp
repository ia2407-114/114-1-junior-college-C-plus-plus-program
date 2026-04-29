// Fig. 9.22: fig09_22.cpp  
// Friends can access private members of a class.
#include <iostream>
using namespace std;
#include "count.h"
// Count class definition 


int main()
{
    Count counter; 
    printDate dateprinter;

    cout << "counter.x after instantiation: ";
    counter.print();


    setX(counter, 8); 
    cout << "counter.x after call to setX friend function: ";
    counter.print();
    dateprinter.printX(counter);
}
