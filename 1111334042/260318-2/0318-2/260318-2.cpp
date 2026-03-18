
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int volume(int side) {
    return side * side * side;
}

double volume(int radius, int height) {
    return 3.14159 * radius * radius * height;
}


int volume(int length, int width, int height) {
    return length * width * height;
}

int main() {
    int s;
    int r, h1;
    int l, w, h2;

    
    cout << "請輸入 1 個整數 (正方體邊長): ";
    cin >> s;
    cout << "計算正方體體積為: " << volume(s) << "\n\n";

    
    cout << "請輸入 2 個整數 (圓柱體 半徑 高): ";
    cin >> r >> h1;
    cout << "計算圓柱體體積為: " << volume(r, h1) << "\n\n";

    
    cout << "請輸入 3 個整數 (長方體 長 寬 高): ";
    cin >> l >> w >> h2;
    cout << "計算長方體體積為: " << volume(l, w, h2) << "\n";

    return 0;
}