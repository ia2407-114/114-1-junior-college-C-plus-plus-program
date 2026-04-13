//Dog.cpp
#include "Dog.h" 
#include <iostream>
#include <iomanip>

using namespace std;

// 預設建構子初始化
Dog::Dog() : name(""), byear(1), bmonth(1), bday(1), ayear(1), amonth(1), aday(1) {}

// 參數化建構子，符合題目條件 2
Dog::Dog(string name, int byear, int bmonth, int bday, int ayear, int amonth, int aday) {
    setDog(name, byear, bmonth, bday, ayear, amonth, aday);
}

void Dog::setDog(string n, int by, int bm, int bd, int ay, int am, int ad) {
    setName(n);
    setBirth(by, bm, bd);
    setAdopt(ay, am, ad);
}

void Dog::setName(string n) {
    name = n;
}

void Dog::setBirth(int by, int bm, int bd) {
    if (by >= 1 && by <= 9999) byear = by;
    else { cout << "Birth year must be 1-9999\n"; byear = 1; }

    if (bm >= 1 && bm <= 12) bmonth = bm;
    else { cout << "Birth month must be 1-12\n"; bmonth = 1; }

    if (bd >= 1 && bd <= 31) bday = bd;
    else { cout << "Birth day must be 1-31\n"; bday = 1; }
}

void Dog::setAdopt(int ay, int am, int ad) {
    // 領養年必須大於等於出生年
    if (ay >= byear && ay <= 9999) ayear = ay;
    else { cout << "Adoption year must be >= birth year\n"; ayear = byear; }

    if (am >= 1 && am <= 12) amonth = am;
    else { cout << "Adoption month must be 1-12\n"; amonth = 1; }

    if (ad >= 1 && ad <= 31) aday = ad;
    else { cout << "Adoption day must be 1-31\n"; aday = 1; }
}

string Dog::getName() const {
    return name;
}

void Dog::printUniversal() const {
    // 直接存取 private 成員並格式化輸出日期
    cout << "姓名: " << getName() << "\n"
        << "生日: " << setfill('0') << setw(4) << byear << "/" << setw(2) << bmonth << "/" << setw(2) << bday << "\n"
        << "領養日: " << setfill('0') << setw(4) << ayear << "/" << setw(2) << amonth << "/" << setw(2) << aday << "\n";
}

void Dog::printAge() const {
    // 題目規定基準日為 2026/04/08
    int currentYear = 2026;
    int currentMonth = 4;
    int currentDay = 8;

    int age = currentYear - byear;

    // 若當年尚未過生日，年齡減 1
    if (currentMonth < bmonth || (currentMonth == bmonth && currentDay < bday)) {
        age--;
    }

    if (age >= 0 && age <= 20) {
        cout << "年齡: " << age << " 歲\n";
    }
    else {
        cout << "Age must be between 0 and 20 years (計算結果: " << age << " 歲)\n";
    }
}
