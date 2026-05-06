#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
using namespace std;

class Matrix
{
public:
    int row, column;
    double** element;   // 改成 double

    // 建構子
    Matrix(int m, int n);

    // 解構子
    ~Matrix();

    // 前序 ! 運算子多載（開平方根）
    Matrix operator!();
};

#endif#pragma once
