#include "Matrix.h"
#include <cmath>

// 建構子
Matrix::Matrix(int m, int n)
{
    row = m;
    column = n;

    element = new double* [m];
    for (int i = 0; i < m; i++)
        element[i] = new double[n];
}

// 解構子
Matrix::~Matrix()
{
    for (int i = 0; i < row; i++)
        delete[] element[i];
    delete[] element;
}

// 前序 ! → 開平方根
Matrix Matrix::operator!()
{
    Matrix temp(row, column);

    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++)
            temp.element[i][j] = sqrt(this->element[i][j]);

    return temp;
}

// 後序 ++ → 平方
Matrix Matrix::operator++(int)
{
    Matrix temp(row, column);

    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++)
            temp.element[i][j] = this->element[i][j] * this->element[i][j];

    return temp;
}
