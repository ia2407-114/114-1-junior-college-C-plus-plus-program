// 260513-2.cpp
// 飛行器類別測試程式
#include <iostream>
#include "aircraft.h"
using namespace std;

int main()
{
  airliner air1("波音747", 1, 68.4, 13100, 416, 12);
  cout << "\n--- 客機資料 ---";
  air1.display();
  air1.display_airliner();

  fightJet jet1("F-16", 2, 9.45, 15240, "機炮/AIM-9", 6, 76.3, 2.0);
  cout << "\n--- 戰鬥機資料 ---";
  jet1.display();
  jet1.display_fightJet();

  return 0;
} // end main
