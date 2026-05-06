#include "Matrix.h"

// 建構子
Matrix::Matrix(int m, int n)
{
    row = m;
    column = n;

    element = new int* [m];
    for (int i = 0; i < m; i++)
        element[i] = new int[n];
}

// 輸入矩陣建構子
Matrix::Matrix(char name, int m, int n)
{
    row = m;
    column = n;

    element = new int* [m];
    for (int i = 0; i < m; i++)
        element[i] = new int[n];

    cout << "輸入一" << m << 'x' << n << "矩陣" << name << endl;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            cout << name << "[" << i << "][" << j << "]=";
            cin >> element[i][j];
        }
}

// 解構子
Matrix::~Matrix()
{
    for (int i = 0; i < row; i++)
        delete[] element[i];
    delete[] element;
}

// 多載 a - b（矩陣減整數）
Matrix Matrix::operator-(int x)
{
    Matrix temp(row, column);

    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++)
            temp.element[i][j] = this->element[i][j] - x;

    return temp;
}

// 印矩陣
void Matrix::print()
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
            cout << element[i][j] << '\t';
        cout << endl;
    }
}
