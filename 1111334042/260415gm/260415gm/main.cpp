
#include <iostream>
#include <string>
#include <stdexcept>
#include "Date.h"
#include "pet.h"

using namespace std;

int main()
{
    cout << "==== 寵物資料系統 ====\n" << endl;


    Pet* pets[3] = { nullptr };
    int count = 0;


    while (count < 3)
    {
        string n, c;
        int by, bm, bd, ay, am, ad;

        cout << "請輸入第 " << count + 1 << " 隻寵物姓名: ";
        cin >> n;
        cout << "請輸入寵物品種: ";
        cin >> c;
        cout << "請輸入生日(西元年 月 日，以空白隔開): ";
        cin >> by >> bm >> bd;
        cout << "請輸入領養日(西元年 月 日，以空白隔開): ";
        cin >> ay >> am >> ad;

        try
        {

            Date bDate(by, bm, bd);
            Date aDate(ay, am, ad);


            pets[count] = new Pet(n, c, bDate, aDate);
            cout << "\n-> 建立成功！資料確認中...\n" << endl;


            pets[count]->print_all_data();

            count++; 
        }
        catch (invalid_argument& e)
        {
            cout << "\n[錯誤] 日期輸入異常: " << e.what() << "\n請重新輸入這隻寵物的資料！\n" << endl;
        }
    }

    cout << "\n系統準備關閉，釋放寵物記憶體..." << endl;

    for (int i = 0; i < 3; i++)
    {
        delete pets[i];
    }

    return 0;
}