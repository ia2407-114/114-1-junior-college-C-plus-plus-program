#include <stdio.h>
#define MAX 15


double power(double x, int n) {
    if (n == 0) {
        return 1;
    }
    else {
        return x * power(x, n - 1);
    }
}


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

    int terms[MAX];

    printf("請輸入 n（必須小於 %d）: ", MAX);
    scanf_s("%d", &n);

    if (n >= MAX) {
        printf("n 超出陣列可存容量！\n");
        return 0;
    }

    printf("請輸入 x：");
    scanf_s("%lf", &x);

    double sum = 0.0;

    for (int i = 0; i <= n; i++) {
        double term = power(x, i) / factorial(i); 
        sum += term;

        terms[i] = term;
    }

    printf("\n=== 級數每一項的值（以整數方式儲存） ===\n");
    for (int i = 0; i <= n; i++) {
        printf("terms[%d] = %d\n", i, terms[i]);
    }

    printf("\ne^x 的近似值為：%.10f\n", sum);

    return 0;
}
