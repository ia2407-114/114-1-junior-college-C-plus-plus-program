#ifndef COUNT_H
#define COUNT_H

#include <iostream>
using namespace std;

class printDate; // 先宣告

class Count
{
    friend void setX(Count&, int);
    friend class printDate; // 設為 friend class

public:
    Count();          // 建構子
    void print() const;

private:
    int x;
};

// friend function 宣告
void setX(Count&, int);

#endif