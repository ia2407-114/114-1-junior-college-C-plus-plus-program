#pragma once
#include <string>
using namespace std;
// 飛行物體類別
class shape
{
protected:
    string name; 
    float shape_area1;// 飛行物名稱 
    float shape_area2;
   
public:
      // 製造者     

    // shape類別建構元函式,設定飛行物的資料
    void area();
   

    // 顯示飛行物的資料
   
};

// 大型客機類別
class rectangle :public shape
{
    protected:
    int length;  // 乘客人數   
    int width;  // 服務人員的數目 

public:
    // rectangle類別建構元函式,設定大型客機的資料 
    void data_input1();

    // 顯示大型客機的資料
    void display2();
};

// 空中巴士客機類別
class cube :public rectangle
{
private:
    int height;   // 沐浴設備數目     
   
public:
    // cube類別建構元函式,設定空中巴士客機的資料 
    void data_input2();

    // 顯示空中巴士客機的資料
    void display3();
};
