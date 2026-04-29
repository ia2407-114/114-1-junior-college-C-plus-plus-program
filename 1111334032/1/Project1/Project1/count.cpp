#include "Count.h"

// 建構子
Count::Count() : x(0)
{
}

// 顯示 x
void Count::print() const
{
    cout << x << endl;
}

// friend function
void setX(Count& c, int val)
{
    c.x = val;
}