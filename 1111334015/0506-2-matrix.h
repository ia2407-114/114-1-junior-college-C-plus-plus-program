#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
using namespace std;

class Matrix
{
public:
    int row, column;
    double** element;   // 使用 double

    Matrix(int m, int n);
    ~Matrix();

    // 前序 !
    Matrix operator!();

    // 後序 ++（注意要有 int）
    Matrix operator++(int);
};

#endif#pragma once
