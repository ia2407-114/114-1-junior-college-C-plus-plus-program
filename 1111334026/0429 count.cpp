#include <iostream>
#include "Count.h"
using namespace std;


    Count::Count(): x(0)
    {

    }

    void Count::print() const
    {
        cout << x << endl;
    }



    void setX(Count& c, int val)
    {
        c.x = val;
    }
    void printDate::printX(const Count& c)
    {
        cout << "Value of x printed by printDate class: " << c.x << endl;
    }
