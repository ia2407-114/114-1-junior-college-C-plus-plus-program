
#include <iostream>
#include <string>
#include <stdexcept>
#include "PetDog.h"

using namespace std;

int main()
{
    string inputName;
    int bY, bM, bD; 
    int aY, aM, aD; 

    cout << "請輸入寵物狗的姓名: ";
    cin >> inputName;

    cout << "請輸入狗的生日 (西元年 月 日，以空白隔開): ";
    cin >> bY >> bM >> bD;

    cout << "請輸入領養日 (西元年 月 日，以空白隔開): ";
    cin >> aY >> aM >> aD;

    try
    {

        PetDog myDog(inputName, bY, bM, bD, aY, aM, aD);

        cout << "\n--- 資料建立成功 ---\n";
        myDog.printInfo();
    }
    catch (invalid_argument& e) 
    {
        cout << "\n[拒絕建立] " << e.what() << "\n";
    }

    return 0;
}