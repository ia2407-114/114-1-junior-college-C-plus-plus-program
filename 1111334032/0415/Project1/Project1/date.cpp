#include "date.h"

date::date() {
    year = 2000;
    month = 1;
    day = 1;
}

date::date(int y, int m, int d) {
    setDate(y, m, d);
}

void date::setDate(int y, int m, int d) {
    year = y;
    while (m < 1 || m > 12) {
        cout << "Invalid month! Please enter again (1~12): ";
        cin >> m;
    }
    month = m;
    
    // ⭐ 判斷該月最大天數
    int maxDay;

    if (m == 2) {
        maxDay = 28; // 簡化版（不考慮閏年）
    }
    else if (m == 4 || m == 6 || m == 9 || m == 11) {
        maxDay = 30;
    }
    else {
        maxDay = 31;
    }

    // ⭐ 日期檢查（依月份）
    while (d < 1 || d > maxDay) {
        cout << "Invalid day! Please enter again (1~" << maxDay << "): ";
        cin >> d;
    }

    day = d;
}

void date::printDate() const {
    cout << year << "/" << month << "/" << day;
}