#include <iostream>
#include "Matrix.h"
using namespace std;

int main()
{
    int row, column;

    cout << "測試 ! (平方根) 與 a++ (平方)\n";
    cout << "輸入列數(row): ";
    cin >> row;
    cout << "輸入行數(column): ";
    cin >> column;

    Matrix a(row, column), b(row, column), c(row, column);

    cout << "輸入矩陣A:\n";
    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++)
        {
            cout << "A[" << i << "][" << j << "]=";
            cin >> a.element[i][j];
        }

    // 平方根
    b = !a;

    cout << "\n矩陣A開平方根:\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
            cout << b.element[i][j] << '\t';
        cout << endl;
    }

    // 平方
    c = a++;

    cout << "\n矩陣A平方:\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
            cout << c.element[i][j] << '\t';
        cout << endl;
    }

    return 0;
}
