#pragma once
#include "flight_object.h"

// 戰鬥機類別
class battleplane : public virtual flight_object
{
protected:
  string weapon;

public:
  // 建立戰鬥機的部分資料
  void create_battleplane();

  // 顯示戰鬥機的資料
  void display();
};