#include <stdio.h>

// 副程式宣告：傳入本金、利率、每年存款、目標金額，回傳所需年數
int calculateYears(int p, double r, int deposit, int aims);

int main(void) {
    int p, deposit, aims;
    double r;
    int years;

    printf("請輸入本金：");
    scanf_s("%d", &p);

    printf("請輸入年利率（例如輸入 0.05 代表 5%%）：");
    scanf_s("%lf", &r);

    printf("請輸入每年定期存入金額：");
    scanf_s("%d", &deposit);

    printf("請輸入存款目標：");
    scanf_s("%d", &aims);

    // 呼叫副程式計算需要幾年
    years = calculateYears(p, r, deposit, aims);

    printf("\n達成目標需要 %d 年。\n", years);

    return 0;
}

// 副程式定義
int calculateYears(int p, double r, int deposit, int aims) {
    double amount = p; // 初始金額
    int year = 0;

    while (amount < aims) {
        year++;
        amount += deposit;     // 每年存入固定金額
        amount = amount * (1 + r); // 加上年利率
        printf("第 %d 年的結存為 %.2f\n", year, amount);
    }

    return year; // 回傳達成目標所需的年數
}
