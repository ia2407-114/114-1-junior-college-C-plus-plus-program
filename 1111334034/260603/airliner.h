#pragma once
#include "flight_object.h"

// 大型客機類別
class airliner : public virtual flight_object
{
protected:
  int passenger;      // 乘客人數
  int service_person; // 服務人員的數目

public:
  // 建立大型客機的部分資料
  void create_airliner();

  // 顯示大型客機的資料
  void display();
};