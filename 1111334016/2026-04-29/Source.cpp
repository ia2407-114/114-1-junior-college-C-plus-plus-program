//Source.cpp
#include <iostream> // 引入標準輸入輸出流
using namespace std; // 使用標準命名空間
#include "friend.h"; // 引入自定義標頭檔
/*題目1.修改上述檔案(fig09_22.cpp)中的類別Count成為介面與實作檔的格式，
另建立一個類別printDate設定為friend class，再使用此類別(物件)的函數印出物件Count的x內容。*/
int main()
{
    Count counter; // 建立 Count 類別的物件 counter，此時 x 為 0
    printDate SETxxx; // 建立 printDate 類別的物件 SETxxx

    cout << "counter.x after instantiation:/實例化之後 counter.x :"; // 印出提示訊息
    //實例化之後 counter.x：
    counter.print(); // 呼叫 print()，預期輸出 0

    // 【核心呼叫】使用 SETxxx 物件來修改 counter 物件的私有資料
    SETxxx.setX(counter, 8); // 將 counter 的 x 修改為 8
    //x=counter,val=8
    cout << "counter.x after call to setX friend function:/呼叫 setX 朋友函數後的counter.x值： "; // 印出修改後的提示
    //呼叫 setX 朋友函數後的counter.x值：
    counter.print(); // 呼叫 print()，預期輸出 8

    return 0; 
}