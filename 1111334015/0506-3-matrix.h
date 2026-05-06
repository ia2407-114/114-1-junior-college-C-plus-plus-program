#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
using namespace std;

class Matrix
{
public:
    int row, column;
    int** element;

    Matrix(int m, int n);
    Matrix(char name, int m, int n);
    ~Matrix();

    // 二元運算子：矩陣 - 整數
    Matrix operator-(int x);

    // 顯示矩陣
    void print();
};

#endif#pragma once
