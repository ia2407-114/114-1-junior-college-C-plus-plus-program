#include <iostream>
#include <string>
using namespace std;
#include "flight.h"
/*題目1. 請修改範例8.txt程式碼，在類別flight_object中加入純虛擬函數 display()，
並且在主程式中加入抽象類別的物件指標變數 flight1，再利用flight1分別指向airliner與bombplane的物件，
並分別呼叫他們各自的display()函數*/
int main()
{
    flight_object* flight1;
    airliner air;

    flight1 = &air;
    air.create_flight_object("");
    air.create_airliner();
    flight1->display();

    bombplane bomb1;
    flight1 = &bomb1;
    bomb1.create_flight_object("轟炸機");
    bomb1.create_bombplane();
    flight1->display();

    return 0;
}
