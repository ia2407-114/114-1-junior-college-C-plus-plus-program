#include <iostream>
#include "Matrix.h"
using namespace std;

int main()
{
    int row, column, b;

    cout << "矩陣減整數運算 a - b\n";
    cout << "輸入矩陣列數(row): ";
    cin >> row;
    cout << "輸入矩陣行數(column): ";
    cin >> column;

    Matrix a('A', row, column);
    Matrix c(row, column);

    cout << "\n原始矩陣 A:\n";
    a.print();

    cout << "\n輸入要減的整數 b: ";
    cin >> b;

    c = a - b;

    cout << "\n結果矩陣 A - " << b << ":\n";
    c.print();

    return 0;
}
