#include <iostream>

using namespace std;

// 函式宣告：參數使用傳遞位址/參照 (call by reference)
double fact(int&);
double power(int&, int&);

int main() {
    // ==========================================
    // 第一部分：先進行階乘計算
    // ==========================================
    int x;
    cout << "--- 1. 階乘計算 ---" << endl;
    cout << "請輸入一個整數 X 算階乘 (X!): ";
    cin >> x;

    // 呼叫階乘函式並立刻印出結果
    cout << x << "! = " << fact(x) << "\n\n";

    // ==========================================
    // 第二部分：階乘結束後，接著進行冪次計算
    // ==========================================
    int a, n;
    cout << "--- 2. 冪次計算 ---" << endl;
    cout << "請輸入底數 a: ";
    cin >> a;
    cout << "請輸入指數 n: ";
    cin >> n;

    // 呼叫冪次函式並印出結果
    cout << a << "^" << n << " = " << power(a, n) << endl;

    return 0;
}

// 階乘函式實作
double fact(int& i) {
    double level = 1.0;

    // 計算階乘
    for (int j = i; j >= 1; j--) {
        level *= j;
    }

    return level;
}

// 冪次函式實作
double power(int& x, int& y) {
    double xpow = 1.0;

    // 計算 x 的 y 次方
    for (int k = 1; k <= y; k++) {
        xpow *= x;
    }

    return xpow;
}