#include <iostream> 
using namespace std; 
#include "Circle.h" // 引入形狀類別的宣告介面

/*題目1: 請根據第二個程式碼，基於"純虛擬函數"與"抽象類別"建立一個"Shap"類別與"體積"純虛擬函數Volume，
並據此建立一個"物件指標"a1，透過這個指標a1，依序指向Shap的衍生類別"圓錐體體積"Cone、"球體體積"Ball、
"圓柱體體積"Cylinder所建立的物件，分別印出他們的體積。*/
int main() { 
    Shape* ptr; // 宣告一個指向基底類別 Shape 的物件指標 ptr（這是多型的基礎）
    Cone c(5, 7); // 建立 Cone 類別的實體物件 c，半徑 5、高 7
    Ball b(4); // 建立 Ball 類別的實體物件 b，半徑 4
    Cylinder cy(5, 7); // 建立 Cylinder 類別的實體物件 cy，半徑 5、高 7

    ptr = &c; // 將基底類別指標 ptr 指向圓錐體物件 c 的記憶體位址
    cout << "圓錐體體積 Cone:" << ptr->Volume() << endl; // 透過指標動態綁定，呼叫 Cone 的 Volume() 並印出結果

    ptr = &b; // 將同一個指標 ptr 改為指向球體物件 b 的記憶體位址
    cout << "球體體積 Ball:" << ptr->Volume() << endl; // 透過指標動態綁定，呼叫 Ball 的 Volume() 並印出結果

    ptr = &cy; // 將同一個指標 ptr 改為指向圓柱體物件 cy 的記憶體位址
    cout << "圓柱體體積 Cylinder:" << ptr->Volume() << endl; // 透過指標動態綁定，呼叫 Cylinder 的 Volume() 並印出結果

    return 0; 
} 
