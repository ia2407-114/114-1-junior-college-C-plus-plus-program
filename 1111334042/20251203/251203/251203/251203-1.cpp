#include <stdio.h>


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
    printf("請輸入 n：");
    scanf_s("%d", &n);

    double e = 1.0;

    for (int i = 1; i <= n; i++) {
        e += 1.0 / factorial(i);
    }

    printf("e 的近似值為：%.10f\n", e);

    return 0;
}
