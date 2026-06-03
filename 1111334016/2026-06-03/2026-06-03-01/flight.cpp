#include <iostream>
#include <string>
using namespace std;
#include "flight.h"
// 飛行物體類別,是一種抽象類別 


    // 建立飛行物的部分資料  
void flight_object::create_flight_object(string obj)
{
    cout << endl;
    cout << "建立飛行物的資料\n";
    cout << "實作一架" << obj << endl;
    cout << "名稱:";
    cin >> name;
    cout << "編號:";
    cin >> id;
    cout << "駕駛員人數:";
    cin >> pilot;
    cout << "煤油量(公升):";
    cin >> kerosene;
}



void airliner::create_airliner()
{
    cout << "乘客人數:";
    cin >> passenger;
    cout << "服務人員的數目:";
    cin >> service_person;
    cout << "製造者:";
    cin >> manufacturer;
}

// 顯示大型客機的資料   
void airliner::display()
{
    cout << "\t顯示大型客機的資料\n";
    cout << "名稱:" << name << endl;
    cout << "編號:" << id << endl;
    cout << "駕駛員人數:" << pilot << endl;
    cout << "煤油量(公升):" << kerosene << endl;
    cout << "乘客人數:" << passenger << endl;
    cout << "服務人員的數目:" << service_person << endl;
    cout << "製造者:" << manufacturer << endl;
}




// 建立戰鬥機的部分資料 
void battleplane::create_battleplane()
{
    cout << "製造者:";
    cin >> manufacturer;
}

// 顯示戰鬥機的資料
void battleplane::display()
{
    cout << "\n顯示衍生類別battleplane物件的資料\n";
    cout << "戰鬥機名稱:" << name << endl;
    cout << "編號:" << id << endl;
    cout << "駕駛員人數:" << pilot << endl;
    cout << "煤油量(公升):" << kerosene << endl;
    cout << "武器名稱:" << weapon << endl;
    cout << "製造者:" << manufacturer << endl;
}



// 建立轟炸機的部分資料 
void bombplane::create_bombplane()
{
    cout << "乘客人數:";
    cin >> passenger;
    cout << "武器名稱:";
    cin >> weapon;
    cout << "製造者:";
    cin >> manufacturer;
}

// 顯示轟炸機的資料
void bombplane::display()
{
    cout << "\n顯示轟炸機的資料\n";
    cout << "名稱:" << name << endl;
    cout << "編號:" << id << endl;
    cout << "駕駛員人數:" << pilot << endl;
    cout << "煤油量(公升):" << kerosene << endl;
    cout << "乘客人數:" << passenger << endl;
    cout << "武器名稱:" << weapon << endl;
    cout << "製造者:" << manufacturer << endl;
}
