#pragma once
#include <iostream>
#include <fstream>
#include <cctype>
#include <conio.h>
using namespace std;
class movie {
public:
    struct cinema
    {
        char name[10];  // 電影名稱
        char date[9];   // 上映日期
        char place[7];  // 上映廳處 
        int price;      // 票價 
    };
    struct cinema hi;
    void write();
    void read();
};