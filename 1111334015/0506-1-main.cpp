#include <iostream>
#include "Matrix.h"
using namespace std;

int main()
{
    int row, column;

    cout << "使用 ! 運算子計算矩陣平方根\n";
    cout << "輸入列數(row): ";
    cin >> row;
    cout << "輸入行數(column): ";
    cin >> column;

    Matrix a(row, column), b(row, column);

    cout << "輸入矩陣A:\n";
    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++)
        {
            cout << "A[" << i << "][" << j << "]=";
            cin >> a.element[i][j];
        }

    b = !a;

    cout << "矩陣A開平方根後:\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
            cout << b.element[i][j] << '\t';
        cout << endl;
    }

    return 0;
}
