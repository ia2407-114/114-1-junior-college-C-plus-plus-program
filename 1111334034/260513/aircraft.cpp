// aircraft.cpp
// aircraft, airliner, fightJet class member-function definitions
#include <iostream>
#include <string>
#include "aircraft.h"
using namespace std;

// aircraft建構子
aircraft::aircraft(string n, int i, float ws, int cl)
{
  cout << "執行父類別aircraft的建構元函式\n";
  name = n;
  id = i;
  wingspan = ws;
  ceiling = cl;
} // end aircraft constructor

// aircraft解構子
aircraft::~aircraft()
{
  cout << "執行父類別aircraft的解構元函式.\n";
} // end aircraft destructor

// 顯示飛行器的資料
void aircraft::display()
{
  cout << "\n飛行器名稱:" << name << endl;
  cout << "編號:" << id << endl;
  cout << "翼展:" << wingspan << " 公尺" << endl;
  cout << "升限:" << ceiling << " 公尺" << endl;
} // end function display

// airliner建構子
airliner::airliner(string n, int i, float ws, int cl, int pax, int wc)
    : aircraft(n, i, ws, cl)
{
  cout << "執行子類別airliner的建構元函式\n";
  passengers = pax;
  toilets = wc;
} // end airliner constructor

// airliner解構子
airliner::~airliner()
{
  cout << "執行子類別airliner的解構元函式.\n";
} // end airliner destructor

// 顯示客機的資料
void airliner::display_airliner()
{
  cout << "乘客數量:" << passengers << endl;
  cout << "廁所數量:" << toilets << endl;
} // end function display_airliner

// fightJet建構子
fightJet::fightJet(string n, int i, float ws, int cl,
                   string wpn, int msl, float thr, float spd)
    : aircraft(n, i, ws, cl)
{
  cout << "執行子類別fightJet的建構元函式\n";
  weapons = wpn;
  missiles = msl;
  thrust = thr;
  mach = spd;
} // end fightJet constructor

// fightJet解構子
fightJet::~fightJet()
{
  cout << "執行子類別fightJet的解構元函式.\n";
} // end fightJet destructor

// 顯示戰鬥機的資料
void fightJet::display_fightJet()
{
  cout << "武器:" << weapons << endl;
  cout << "飛彈數量:" << missiles << endl;
  cout << "推力:" << thrust << " kN" << endl;
  cout << "飛行速度:" << mach << " 馬赫" << endl;
} // end function display_fightJet
