#ifndef DATE_H
#define DATE_H

class Date {
private:
    int year;
    int month;
    int day;

    bool isValid(int y, int m, int d);

public:
    Date(int y = 1990, int m = 1, int d = 1);

    void setDate(int y, int m, int d);
    void printAD();     
    void printROC();    
};

#endif#pragma once
