#pragma once 
using namespace std; 
class Shape { // 宣告一個名為 Shape 的類別，作為所有形狀的基底類別（抽象類別）
public: // 存取權限：公有成員，外部與衍生類別皆可存取
    virtual double Volume() const = 0; // 宣告「純虛擬函式」，不在此實作，強制所有子類別必須覆寫它
}; 

class Cone : public Shape { // 宣告圓錐體類別 Cone，以公有繼承（public）方式繼承自 Shape
private: // 存取權限：私有成員，只有 Cone 類別內部可以存取
    double radius, height; // 宣告私有成員變數：半徑 radius 與高 height

public: 
    Cone(double r, double h); // 僅宣告建構子，傳入半徑與高（實作分離到 .cpp）

    double Volume() const override; // 宣告計算體積的成員函式，使用 override 關鍵字確保正確覆寫了基底類別
}; 

class Ball : public Shape { // 宣告球體類別 Ball，繼承自 Shape
private:
    double radius; // 宣告私有成員變數：半徑 radius

public: 
    Ball(double r); // 僅宣告建構子，傳入半徑（實作分離到 .cpp）

    double Volume() const override; // 宣告計算體積的成員函式，並標記為覆寫
}; 

class Cylinder : public Shape { // 宣告圓柱體類別 Cylinder，繼承自 Shape
private: 
    double radius, height; // 宣告私有成員變數：半徑 radius 與高 height

public: 
    Cylinder(double r, double h); // 僅宣告建構子，傳入半徑與高（實作分離到 .cpp）

    double Volume() const override; // 宣告計算體積的成員函式，並標記為覆寫
}; 