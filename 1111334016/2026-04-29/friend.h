//friend.h
#pragma once 
class Count // Count類別
{
    // 【核心語法】宣告 printDate 為朋友類別，使其能存取 Count 的私有成員 x
    friend class printDate; // 朋友類別:允許其他function/class存取自己的非公開成員
public:
    Count(); // 宣告建構子，用於初始化輸出值
    void print() const; // 宣告常數成員函數，用於印出數值
private:
    int x; 
};

class printDate { // printDate類別
public:
    // 【核心函數】設定 Count 物件中的 x 值
    void setX(Count& c, int val);
    // 我要傳入一個名為 c 的 Count 物件，而且我打算直接操作它，而不是操作它的複製品。
private:

};
