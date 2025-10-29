#include <stdio.h>

// 副程式宣告（傳入整數 fact，回傳 double）
double factorial(int fact);

int main(void) {
    int fact, n;
    int i, j;
    double e = 1.0;  //e的初始值是1
    double fact_value; //存放階乘結果

    //輸入一個整數fact<13，並計算其階乘
    printf("請輸入一個整數 fact（<13）：");
    scanf_s("%d", &fact);

    if (fact >= 13 || fact < 0) {
        printf("錯誤：請輸入 0 到 12 之間的整數。\n");
        return 1;
    }

    //呼叫副程式計算階乘
    fact_value = factorial(fact);

    printf("%d 的階乘為：%.0f\n", fact, fact_value);

    //輸入項目 n<13，並計算e的近似值
    printf("請輸入 e 的項目數量 n（<13）：");
    scanf_s("%d", &n);

    if (n >= 13 || n < 1) {
        printf("錯誤：請輸入 1 到 12 之間的整數。\n");
        return 1;
    }

    //使用副程式計算e的近似值
    for (i = 1; i < n; i++) {
        e += 1.0 / factorial(i); //直接呼叫副程式
    }

    printf("使用 %d 項計算的 e 近似值為：%.10f\n", n, e);

    return 0;
}

//副程式定義：計算 fact 的階乘並回傳 double
double factorial(int fact) {
    double result = 1.0;
    int i;

    for (i = 1; i <= fact; i++) {
        result *= i;
    }

    return result; //回傳計算結果
}
