#include "Matrix.h"
#include <cmath>   // sqrt

// 建構子
Matrix::Matrix(int m, int n)
{
    row = m;
    column = n;

    element = new double* [m];
    for (int i = 0; i < m; i++)
        element[i] = new double[n];
}

// 解構子（釋放記憶體）
Matrix::~Matrix()
{
    for (int i = 0; i < row; i++)
        delete[] element[i];
    delete[] element;
}

// 多載 ! 運算子（平方根）
Matrix Matrix::operator!()
{
    Matrix temp(row, column);

    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++)
            temp.element[i][j] = sqrt(this->element[i][j]);

    return temp;
}
