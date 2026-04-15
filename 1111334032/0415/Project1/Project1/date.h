#ifndef DATE_H
#define DATE_H

#include <iostream>
using namespace std;

class date {
private:
    int year;
    int month;
    int day;

public:
    date();
    date(int y, int m, int d);

    void setDate(int y, int m, int d);
    void printDate() const;
};

#endif