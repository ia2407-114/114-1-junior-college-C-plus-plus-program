#include <iostream>
#include "date.h"
using namespace std;

Date::Date(int y, int m, int d) {
    if (isValid(y, m, d)) {
        year = y;
        month = m;
        day = d;
    }
    else {
        year = 1990;
        month = 1;
        day = 1;
    }
}

bool Date::isValid(int y, int m, int d) {
    if (m < 1 || m > 12) return false;
    if (d < 1 || d > 31) return false;
    return true;
}

void Date::setDate(int y, int m, int d) {
    if (isValid(y, m, d)) {
        year = y;
        month = m;
        day = d;
    }
    else {
        cout << "Invalid date! Set to default.\n";
        year = 1990;
        month = 1;
        day = 1;
    }
}

void Date::printAD() {
    cout << "AD: " << year << "/" << month << "/" << day << endl;
}

void Date::printROC() {
    cout << "ROC: " << year - 1911 << "/" << month << "/" << day << endl;
}
