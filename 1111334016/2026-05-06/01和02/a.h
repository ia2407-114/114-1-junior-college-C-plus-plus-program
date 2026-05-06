#pragma once
class Matrix
{
public:
    int row, column;
    float** element;

    Matrix(int m, int n)
    {
        row = m;
        column = n;

        // 配置mxn的二維陣列element之動態記憶體
        element = new float* [m];
        int i, j;
        for (i = 0; i < m; i++)
            element[i] = new float[n];
    }

    // 定義矩陣的「-」(負號)前置運算子的多載
    Matrix operator!()
    {
        Matrix temp(row, column);
        int i, j;
        for (i = 0; i < row; i++)
            for (j = 0; j < column; j++)
                temp.element[i][j] = sqrt(this->element[i][j]);
        return temp;
    }


    Matrix operator ++(int a)
    {
        Matrix temp(row, column);
        int i, j;
        for (i = 0; i < row; i++)
            for (j = 0; j < column; j++)

                temp.element[i][j] = (this->element[i][j])* (this->element[i][j]);
        return temp;
    }
};
