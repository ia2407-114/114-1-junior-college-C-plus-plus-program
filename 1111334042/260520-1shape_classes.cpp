#include "shape_classes.h"
#include <iostream>

using namespace std;

shape::shape() {
    name = "未命名圖形";
    shape_area = 0.0;
}

void shape::area() {
    cout << name << "的面積為: " << shape_area << endl;
}

rectangle::rectangle() {
    name = "長方形";
    length = 0.0;
    width = 0.0;
}

void rectangle::data_input() {
    cout << "請輸入長方形的長: ";
    cin >> length;
    cout << "請輸入長方形的寬: ";
    cin >> width;
    shape_area = length * width;
}

cube::cube() {
    name = "長方體";
    height = 0.0;
    volume = 0.0;
}

void cube::data_input() {
    rectangle::data_input();
    cout << "請輸入長方體的高: ";
    cin >> height;
    volume = shape_area * height;

    cout << "\n--- 計算結果 ---" << endl;
    area();
    cout << name << "的體積為: " << volume << endl;
}