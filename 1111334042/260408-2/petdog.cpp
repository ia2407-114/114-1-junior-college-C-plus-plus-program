// PetDog.cpp
#include <iostream>
#include <stdexcept>
#include "PetDog.h"

using namespace std;


PetDog::PetDog(string n, int by, int bm, int bd, int ay, int am, int ad)
{

    if (!isValidDate(by, bm, bd)) {
        throw invalid_argument("生日的日期格式錯誤！");
    }
    if (!isValidDate(ay, am, ad)) {
        throw invalid_argument("領養日的日期格式錯誤！");
    }

    int currentYear = 2026;
    int currentMonth = 4;
    int currentDay = 8;


    if (by > currentYear ||
        (by == currentYear && bm > currentMonth) ||
        (by == currentYear && bm == currentMonth && bd > currentDay)) {
        throw invalid_argument("錯誤：生日不能在未來！");
    }


    int age = currentYear - by;

    if (currentMonth < bm || (currentMonth == bm && currentDay < bd)) {
        age--;
    }

    if (age < 0 || age > 20) {
        throw invalid_argument("錯誤：狗的年齡不合理 (必須介於 0 ~ 20 歲之間)！");
    }

    if (ay < by ||
        (ay == by && am < bm) ||
        (ay == by && am == bm && ad < bd)) {
        throw invalid_argument("錯誤：領養日不能早於生日！");
    }

    if (ay > currentYear ||
        (ay == currentYear && am > currentMonth) ||
        (ay == currentYear && am == currentMonth && ad > currentDay)) {
        throw invalid_argument("錯誤：領養日不能在未來！");
    }

    name = n;
    bYear = by; bMonth = bm; bDay = bd;
    aYear = ay; aMonth = am; aDay = ad;
}


void PetDog::printInfo() const
{
    cout << "狗名: " << name << "\n"
        << "生日: " << bYear << "/" << bMonth << "/" << bDay << "\n"
        << "領養日: " << aYear << "/" << aMonth << "/" << aDay << "\n";
}


bool PetDog::isLeapYear(int y) const
{
    return (y % 400 == 0 || (y % 100 != 0 && y % 4 == 0));
}


bool PetDog::isValidDate(int y, int m, int d) const
{
    if (y < 1 || m < 1 || m > 12 || d < 1) return false;

    static const int daysPerMonth[13] =
    { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    if (m == 2 && isLeapYear(y)) {
        return d <= 29;
    }
    return d <= daysPerMonth[m];
}