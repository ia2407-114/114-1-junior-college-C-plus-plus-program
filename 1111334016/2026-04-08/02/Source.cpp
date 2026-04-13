//Source.cpp
  #include <iostream>
#include <string>
#include "Dog.h" 
using namespace std;

int main() {
    string name;
    int byear, bmonth, bday, ayear, amonth, aday;

    cout << "輸入狗的姓名: ";
    cin >> name;

    cout << "輸入狗的生日 (西元 月 日): ";
    cin >> byear >> bmonth >> bday; // 修正 cin 輸入邏輯

    cout << "輸入狗的領養日 (西元 月 日): ";
    cin >> ayear >> amonth >> aday; // 修正 cin 輸入邏輯

    cout << "\n";

    // 使用參數化建構子實例化物件 (符合條件 2)
    Dog myDog(name, byear, bmonth, bday, ayear, amonth, aday);

    // 呼叫物件方法
    myDog.printUniversal();
    myDog.printAge();

    return 0;
}
