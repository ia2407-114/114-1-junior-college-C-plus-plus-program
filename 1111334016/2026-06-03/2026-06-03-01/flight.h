#pragma once
#include <iostream>
#include <string>
using namespace std;
// 飛行物體類別,是一種抽象類別 
class flight_object
{
public:
    string name;  // 飛行物名稱 
    int id;       // 飛行物編號 
    int pilot;    // 駕駛員人數 
    float kerosene;  // 煤油量(煤油是飛行物使用的燃料)           
    string manufacturer;  // 製造者

    // 建立飛行物的部分資料  
    void create_flight_object(string obj);
    virtual void display() = 0;
};

// 大型客機類別
class airliner : public virtual flight_object
{
protected:
    int passenger;  // 乘客人數   
    int service_person;  // 服務人員的數目 

public:
    // 建立大型客機的部分資料    
    void create_airliner();

    // 顯示大型客機的資料   
    void display();
};

// 戰鬥機類別 
class battleplane :public virtual flight_object
{
protected:
    string weapon;

public:
    // 建立戰鬥機的部分資料 
    void create_battleplane();

    // 顯示戰鬥機的資料
    void display();
};

// 轟炸機類別 
class bombplane :public virtual airliner, public virtual battleplane
{
public:
    // 建立轟炸機的部分資料 
    void create_bombplane();
    // 顯示轟炸機的資料
    void display();
};
