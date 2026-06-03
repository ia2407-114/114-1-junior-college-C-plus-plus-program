#pragma once
#include "airliner.h"
#include "battleplane.h"

// 轟炸機類別
class bombplane : public airliner, public battleplane
{
public:
  // 建立轟炸機的部分資料
  void create_bombplane();

  // 顯示轟炸機的資料
  void display();
};