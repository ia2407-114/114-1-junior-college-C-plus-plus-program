#include <iostream> 
using namespace std; 
#include "Circle.h" // 引入剛才定義的介面標頭檔，才能進行實作

// 圓錐體 Cone 的建構子實作，使用成員初始化列表將參數 r, h 賦值給成員變數 radius, height
Cone::Cone(double r, double h) : radius(r), height(h) {}
double Cone::Volume() const { // 圓錐體體積函式實作（注意：實作檔不可寫 override）
    return 3.14159 * radius * radius * height * (1.0 / 3.0); // 使用 1.0/3.0 確保為浮點數除法
} 

Ball::Ball(double r) : radius(r) {} // 球體 Ball 的建構子實作，初始化半徑 radius
double Ball::Volume() const { // 球體體積函式實作
    return 3.14159 * radius * radius * radius * (4.0 / 3.0); // 使用 4.0/3.0 避免整數除法無條件捨去
} 

Cylinder::Cylinder(double r, double h) : radius(r), height(h) {} // 圓柱體 Cylinder 的建構子實作
double Cylinder::Volume() const { // 圓柱體體積函式實作
    return 3.14159 * radius * radius * height; 
} 