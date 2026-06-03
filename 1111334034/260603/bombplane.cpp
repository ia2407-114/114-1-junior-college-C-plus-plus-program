#include "bombplane.h"

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