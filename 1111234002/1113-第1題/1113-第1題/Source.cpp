/*題目1. 寫一個主程式，透過鍵盤輸入本金、年利率，再建立一個副程式傳入這三個參數，
計算每年的本利和之後傳回放入陣列中一共10年，並且印出陣列內本利和結果。
本利和計算方程式是（本金x （1+利率）時間）*/
#include<stdio.h>
#include<math.h>
double bn(double ma, double le, int i);
int main(void) {
    double ma; // 本金
    double le; // 年利率
    double zn[10]; // 存放每年本利和的陣列，10年

    // 輸入本金與年利率
    printf("輸入本金：");
    scanf_s("%lf", &ma);  
    printf("輸入年利率：");
    scanf_s("%lf", &le); 

    // 計算並存入陣列
    for (int i = 1; i <= 10; i++) {
        zn[i - 1] = bn(ma, le, i);  
    }

    // 輸出每年的本利和
    for (int i = 0; i < 10; i++) {
        printf("第%d年：%.2f\n", i + 1, zn[i]);
    }
    return 0;
}

// 計算每年本利和的副程式
double bn(double ma, double le, int i) {
    double h; // 本利和
    h = ma * pow((1 + le), i); 
    return h;
}
