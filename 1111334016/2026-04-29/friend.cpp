//friend.cpp
#include <iostream> // 引入標準輸入輸出流
using namespace std; // 使用標準命名空間
#include "friend.h"; // 引入自定義標頭檔

    // 【核心函數】建構子實作：將 x 初始化為 0
    // 程式碼列：Count::Count() : x(0) { }
Count::Count() // 輸出的初始值是0
    : x(0) // 使用初始化列表將 x 設為 0
{

}

// 【核心函數】印出目前的 x 值
void Count::print() const // 印出x
{
    cout << x << endl; // 輸出變數 x 的值並換行
}

// 【核心函數】透過朋友權限修改 Count 的私有成員
void printDate::setX(Count& c, int val)//一個類別為 Count 的物件。
//使用了 &（引用），所以這個 c 實際上就是你在 main 函數中建立的那個 counter 物件的「別名」。
{  //x=counter,val=8
    c.x = val; // 因為是 friend，所以可以直接存取並修改 count 物件中的私有成員 x
    //我要存取c物件裡面的x成員
}