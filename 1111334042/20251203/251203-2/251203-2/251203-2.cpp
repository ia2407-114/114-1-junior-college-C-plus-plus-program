#include <stdio.h>

// 遞迴計算 x^n
double power(double x, int n) {
    if (n == 0) {
        return 1;
    }
    else {
        return x * power(x, n - 1);
    }
}

// 遞迴計算 n!
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n;
    double x;

    printf("請輸入 n：");
    scanf_s("%d", &n);

    printf("請輸入 x：");
    scanf_s("%lf", &x);

    double result = 1.0;

    for (int i = 1; i <= n; i++) {
        result += power(x, i) / factorial(i);
    }

    printf("e^x 的近似值為：%.10f\n", result);

    return 0;
}
