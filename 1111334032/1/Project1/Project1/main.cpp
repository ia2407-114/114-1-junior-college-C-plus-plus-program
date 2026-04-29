#include <iostream>
#include "Count.h"
#include "printDate.h"
using namespace std;

int main()
{
    Count counter;
    printDate pd;

    cout << "初始 x: ";
    counter.print();

    setX(counter, 8);

    cout << "設定後 x: ";
    counter.print();

    // 用 friend class 印出
    pd.showX(counter);

    return 0;
}