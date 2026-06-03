#include "battleplane.h"

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