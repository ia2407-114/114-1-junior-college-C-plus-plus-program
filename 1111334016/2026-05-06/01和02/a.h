#pragma once 
class Matrix // 定義一個名為 Matrix 的類別
{
public: // 設定以下成員為公開存取
    int row, column; // 宣告整數變數，儲存矩陣的列數(row)與行數(column)
    float** element; // 這是一個清單，裡面存了一堆『列』的地址；而每一列裡面，又存了一堆『數字』的地址

    // Matrix 類別的建構子：定義物件建立時如何初始化記憶體
    Matrix(int m, int n)
    {
        // 將傳入的參數 m (代表列數) 賦值給類別內部的 row 變數
        row = m;

        // 將傳入的參數 n (代表行數) 賦值給類別內部的 column 變數
        column = n;

        // 第一層配置：配置「列 (Rows)」的指標清單
        // 配置mxn的二維陣列element之動態記憶體
        // 這裡申請了 m 個「指標」空間，element 會指向這排指標的起點
        // 想像成：先決定這張表格總共有幾「列」
        element = new float* [m];

        // 宣告區域變數 i 與 j，準備用來跑迴圈
        int i, j;

        // --- 第二層配置：為每一「列」配置它的「行 (Columns)」 ---
        // 使用 for 迴圈逐一處理剛剛申請出來的每一列
        for (i = 0; i < m; i++)

            // 為第 i 列申請長度為 n 的 float 空間
            // 這行執行完後，第 i 列就擁有了 n 個可以用來存數字的「行」位置
            //在每一列中，橫向切出 n 個格子
            element[i] = new float[n];
    }
    // 定義矩陣的「-」(負號)前置運算子的多載
    Matrix operator!() // 多載 ! 運算子，使其對矩陣進行運算
    {
        Matrix temp(row, column); // 建立一個暫存矩陣 temp，大小與原矩陣相同
        int i, j; 
        for (i = 0; i < row; i++) // 遍歷矩陣的所有列
            for (j = 0; j < column; j++) // 遍歷矩陣的所有行
                // 使用 sqrt 函數對當前元素開根號，並存入 temp 中
                temp.element[i][j] = sqrt(this->element[i][j]);
        return temp; // 回傳運算完後的暫存矩陣物件
    }

    Matrix operator ++(int a) // 多載 ++ 運算子，參數 int a 是 C++ 用來辨識「後置」的語法慣例
    {
        Matrix temp(row, column); // 建立一個大小相同的暫存矩陣 temp
        int i, j; 
        for (i = 0; i < row; i++) // 遍歷列
            for (j = 0; j < column; j++) // 遍歷行
                // 計算原元素的二次方（自己乘自己），並存入 temp
                temp.element[i][j] = (this->element[i][j]) * (this->element[i][j]);
        return temp; // 回傳運算後的新矩陣物件
    }
};
