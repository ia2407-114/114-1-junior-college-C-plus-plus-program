// main.cpp
#include <iostream>
#include <stdexcept>
#include "Date.h"

using namespace std;

int main()
{
 
    Date defaultDate;
    cout << "--- 預設建構子測試 ---\n西元：";
    defaultDate.printGregorian();
    cout << "\n";
    defaultDate.printMinguo();
    cout << "\n\n";


    int inputYear, inputMonth, inputDay;
    cout << "請輸入西元年、月、日 (中間以空白隔開): ";
    cin >> inputYear >> inputMonth >> inputDay;

    try
    {
        Date userDate(inputYear, inputMonth, inputDay);

        cout << "\n--- 輸入結果 ---\n西元：";
        userDate.printGregorian();
        cout << "\n";
        userDate.printMinguo();
        cout << "\n";
    }
    catch (invalid_argument& e) 
    {
        cout << "\n[錯誤] 您輸入的日期不正確: " << e.what() << "\n";
    }

    return 0;
}