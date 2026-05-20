#include <iostream>
#include <string>
#include "flight.h"
using namespace std;
/*題目1:（多層繼承）寫一程式，定義一shape類別，且其成員變數名稱name與圖形的面積shape_area，
及顯示圖形的面積area()。接著定義shape類別的衍生類別rectangle，
其成員變數分別表示長方形的長length與寬width，及輸入長方形的長與寬data_input()。
接著定義rectangle類別的衍生類別cube，
其成員變數分別表示長方體的高height及data_input()輸入長方體的高並計算體積。
請將類別以 介面檔與實作檔分開設計，程式執行時，輸入長方體形的長、寬及高，輸出長方體的體積。*/
int main()
{
    cube cube1;
    cube1.data_input1(); 
    cube1.data_input2();
    cout << endl;
    cube1.display2();
    cube1.display3();
    cube1.area();
    return 0;
}
