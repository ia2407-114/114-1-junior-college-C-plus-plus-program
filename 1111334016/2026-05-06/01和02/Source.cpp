#include <iostream> // 引入標準輸入輸出流庫
using namespace std; // 使用標準命名空間，省去寫 std:: 的麻煩
#include "a.h"; // 引入自定義的矩陣類別定義檔

/*題目1. 利用範例1.cpp的類別中，建立一個前序一元運算子多載，
!a可以將矩陣a的元素開"平方根"之後印出，矩陣元素的形態要使用float或double。
請分成以介面檔與實作檔的方式撰寫*/

/*題目2. 承上題，在Matrix中再加入一個"後序"一元運算子多載，
a++可以計算出矩陣a的每個元素的"2次方"後印出，矩陣元素的形態要使用float或double。
請分成以介面檔與實作檔的方式撰寫*/
int main() // 程式主執行進入點
{
    int i, j, row, column; // 宣告區域變數：迴圈計數與矩陣維度
    cout << "重新定義「-」前置運算子的多載，求A矩陣的副矩陣(-A)：\n"; 
    cout << "輸入矩陣A的列數(row):"; 
    cin >> row; 
    cout << "輸入矩陣A的行數(column):"; 
    cin >> column; 

    Matrix a(row, column), b(row, column); // 根據輸入的大小，建立兩個矩陣物件 a 與 b
    cout << "輸入一" << row << 'x' << column << "矩陣A" << endl; // 格式化輸出提示
    for (i = 0; i < row; i++) // 外層迴圈跑每一列
        for (j = 0; j < column; j++) // 內層迴圈跑每一行
        {
            cout << "A[" << i << "][" << j << "]="; // 提示目前正在輸入哪一個座標的元素
            cin >> a.element[i][j]; // 將輸入的數值存入矩陣 a 的對應位置
        }

    cout << "矩陣A的原矩陣(A):\n"; 
    for (i = 0; i < row; i++) // 遍歷列
    {
        for (j = 0; j < column; j++) // 遍歷行
            cout << a.element[i][j] << '\t'; 
        cout << endl; 
    }

    b = !a; // 執行運算子多載：呼叫 operator!()，計算 a 的平方根矩陣並賦值給 b
    cout << "矩陣A的平方根矩陣(!A):\n"; 
    for (i = 0; i < row; i++) // 遍歷列
    {
        for (j = 0; j < column; j++) // 遍歷行
            cout << b.element[i][j] << '\t'; // 輸出 b 矩陣中的計算結果
        cout << endl; 
    }

    b = a++; // 執行運算子多載：呼叫 operator++(int)，計算 a 的平方矩陣並賦值給 b
    cout << "矩陣A的2次方矩陣(A++):\n"; 
    for (i = 0; i < row; i++) // 遍歷列
    {
        for (j = 0; j < column; j++) // 遍歷行
            cout << b.element[i][j] << '\t'; // 輸出 b 矩陣中的二次方計算結果
        cout << endl; // 換行
    }
    return 0; 
}
