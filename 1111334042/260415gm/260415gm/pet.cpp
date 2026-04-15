
#include <iostream>
#include "pet.h"

using namespace std;


Pet::Pet(const string& n, const string& c, const Date& b, const Date& a)
    : name(n), category(c), birthday(b), adoptDate(a)
{
}


Pet::~Pet()
{
    cout << "寵物 [" << name << "] 已從系統移除，Bye Bye~~" << endl;
}


bool Pet::check_birth() const
{
    if (birthday.getYear() > 2026) return false;
    return true;
}


bool Pet::check_adopt() const
{
    if (adoptDate.getYear() < birthday.getYear()) return false;
    if (adoptDate.getYear() == birthday.getYear()) {
        if (adoptDate.getMonth() < birthday.getMonth()) return false;
        if (adoptDate.getMonth() == birthday.getMonth()) {
            if (adoptDate.getDay() < birthday.getDay()) return false;
        }
    }
    return true;
}

void Pet::print_all_data() const
{
    cout << "【寵物詳細資料】" << endl;
    cout << "姓名: " << name << endl;
    cout << "品種: " << category << endl;

    cout << "生日: ";
    birthday.printUniversal();
    cout << " (";
    birthday.printStandard();
    cout << ")" << endl;

    cout << "領養日: ";
    adoptDate.printUniversal();
    cout << " (";
    adoptDate.printStandard();
    cout << ")" << endl;


    cout << "--- 檢查結果 ---" << endl;
    if (check_birth()) cout << "生日檢查: [通過] 合理" << endl;
    else cout << "生日檢查: [失敗] 錯誤！生日在未來" << endl;

    if (check_adopt()) cout << "領養日檢查: [通過] 合理" << endl;
    else cout << "領養日檢查: [失敗] 錯誤！領養日早於出生日" << endl;
    cout << "---------------------------------\n" << endl;
}