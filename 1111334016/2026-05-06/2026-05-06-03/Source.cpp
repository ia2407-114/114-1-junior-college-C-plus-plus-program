#include <iostream>
using namespace std;
#include "b.h";
/*題目3. 利用範例3.cpp的類別中，建立一個二元運算子多載，a-b可以將矩陣a的元素減去整數b之後印出，
矩陣元素的形態要使用int。請分成以介面檔與實作檔的方式撰寫，並且印出原始矩陣內容以資比較*/
int main()
{
    int i, j, row, column;
    int b;
    cout << "重新定義「+」(加號)運算子多載，使其能應用在矩陣加法上\n";
    cout << "輸入矩陣A的列數(row):";
    cin >> row;
    cout << "輸入矩陣A的行數(column):";
    cin >> column;
    Matrix a('A', row, column);
    Matrix c(row, column);
    cout << "輸入b的值:";
    cin >> b;
    cout << "矩陣A的原矩陣(A):\n";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
            cout << a.element[i][j] << '\t';
        cout << endl;
    }
    c = a - b;  // 矩陣A - 矩陣B

    cout << "矩陣A - 整數B = \n";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
            cout << c.element[i][j] << '\t';
        cout << endl;
    }

    return 0;
}
