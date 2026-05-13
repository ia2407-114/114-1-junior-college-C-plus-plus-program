#include <iostream>
#include "Time.h" // Time class definition
using namespace std;
/*題目1. 請根據上述"運算子多載的範例程式碼.zip"修改為相對應的時間格式的運算子多載，
例如: time1(8,24,36), time1++ 結果為: 8:24:36，需要檢查時間(時、分、秒)是否有超過範圍*/
int main()
{
    Time d1(12, 27, 50); // December 27, 2010   
    Time d2; // defaults to January 1, 1900

    cout << "d1 is " << d1 << "\nd2 is " << d2;
    cout << "\n\nd1 += 7 is " << (d1 += 7);

    d2.setTime(2, 28, 20);
    cout << "\n\n  d2 is " << d2;
    cout << "\n++d2 is " << ++d2;

    Time d3(23, 59, 59);

    cout << "\n\nTesting the prefix increment operator:\n"
        << "  d3 is " << d3 << endl;
    cout << "++d3 is " << ++d3 << endl;
    cout << "  d3 is " << d3;

    cout << "\n\nTesting the postfix increment operator:\n"
        << "  d3 is " << d3 << endl;
    cout << "d3++ is " << d3++ << endl;
    cout << "  d3 is " << d3 << endl;
} // end main


