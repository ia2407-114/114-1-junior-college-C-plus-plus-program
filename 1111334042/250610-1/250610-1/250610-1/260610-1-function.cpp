#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include "260610-1.h"
using namespace std;

void writeAnimalFile()
{
    // 宣告型態為ofstream的資料輸出串流物件變數writefile
    // 做為寫入檔案之用
    ofstream writefile;

    // 以寫入模式開啟檔案animal.txt    
    writefile.open("animal.txt", ios_base::out);
    if (writefile.fail())
    {
        cout << "animal.txt檔案無法開啟!\n";
        exit(1);
    }

    writefile << "動物\t年齡\t身高\n";
    int i;
    string name;
    int age, height;
    for (i = 1; i <= 3; i++)
    {
        cout << "輸入第" << i
            << "種動物名稱，年齡及身高(以空白鍵作區隔):\n";
        cin >> name >> age >> height;
        writefile << name << '\t' << age << '\t' << height << '\n';
        if (writefile.fail())
        {
            cout << "寫入失敗\n";
            break;
        }
    }

    writefile.close();
    if (writefile.fail())
    {
        cout << "animal.txt檔案無法關閉!\n";
        exit(1);
    }
}

void showAnimalFile()
{
    ifstream readfile;

    readfile.open("animal.txt", ios_base::in);
    if (readfile.fail())
    {
        cout << "animal.txt檔案無法開啟!\n";
        exit(1);
    }

    string name;
    int age, height;

    readfile >> name;
    cout << name << '\t';
    readfile >> name;
    cout << name << '\t';
    readfile >> name;
    cout << name << '\n';

    int i;
    for (i = 1; i <= 3; i++)
    {
        readfile >> name >> age >> height;
        if (readfile.fail())
        {
            cout << "讀取失敗\n";
            break;
        }
        cout << name << '\t' << age << '\t' << height << '\n';
    }

    readfile.close();
    if (readfile.fail())
    {
        cout << "animal.txt檔案無法關閉!\n";
        exit(1);
    }
}