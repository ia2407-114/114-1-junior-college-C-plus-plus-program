#include <iostream>
using namespace std;
#ifndef COUNT_H
#define COUNT_H
class Count
{
    friend void setX(Count&, int); 
    friend class printDate;
public:
    Count();


    void print() const; 
 
private:
    int x; 
};
 
class printDate
{
public:
    void printX(const Count& c);
};
#endif
