#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cctype>
#include <conio.h>
#include <cstring>
#include "260610-3.h"

using namespace std;

int writeAnimalFile()
{
    struct animal data;
    int n = 0;

    // 宣告型態為ofstream的資料輸出串流物件變數writebinaryfile 
    // 做為寫入檔案之用
    ofstream writebinaryfile;

    // 以二進制的寫入模式開啟animal.bin
    writebinaryfile.open("animal.bin", ios_base::out | ios_base::binary);
    if (writebinaryfile.fail())
    {
        cout << "animal.bin檔案無法開啟!\n";
        exit(1);
    }

    cout << "建立動物資訊:";
    do
    {
        cout << "\n動物名稱:";
        cin >> data.name;
        cout << "年齡:";
        cin >> data.age;
        cout << "身高:";
        cin >> data.height;

        // 將1筆animal結構型態的資料到
        // writebinaryfile串流的檔案指標所在位置中 
        writebinaryfile.write((char*)&data, sizeof(struct animal));
        if (writebinaryfile.fail())
        {
            cout << "寫入失敗\n";
            break;
        }

        n++;
        cout << "是否繼續輸入? (y/n):";
    } while (toupper(_getche()) == 'Y');
    // getche函式宣告在conio.h，toupper函式宣告在cctype

    cout << '\n';

    writebinaryfile.close();
    if (writebinaryfile.fail())
    {
        cout << "animal.bin檔案無法關閉!\n";
        exit(1);
    }

    return n;
}

void calculateAverage(int n)
{
    struct animal data;

    // 宣告型態為fstream的資料輸入/輸出串流物件變數read_writefile
    // 做為讀取/寫入檔案之用
    fstream read_writefile;

    // 以讀取寫入模式開啟檔案animal.bin
    // 新增的資料會寫到檔尾
    read_writefile.open("animal.bin", ios_base::in | ios_base::out | ios_base::binary);
    if (read_writefile.fail())
    {
        cout << "animal.bin檔案無法開啟!\n";
        exit(1);
    }

    float total_age = 0, total_height = 0;
    int i;
    for (i = 1; i <= n; i++)
    {
        read_writefile.read((char*)&data, sizeof(struct animal));
        if (read_writefile.fail())
        {
            cout << "讀取失敗\n";
            break;
        }
        total_age = total_age + data.age;
        total_height = total_height + data.height;
    }

    // 設定顯示小數一位 
    cout.precision(1);
    cout.setf(ios::fixed);
    // 設定顯示小數一位

    cout << "平均年齡:" << total_age / n
        << "\t平均身高:" << total_height / n << '\n';

    // 將read_writefile串流的檔案指標移到檔尾 
    read_writefile.clear();
    read_writefile.seekp(0, ios::end);

    strcpy(data.name, "average");
    data.age = total_age / n;
    data.height = total_height / n;
    read_writefile.write((char*)&data, sizeof(struct animal));

    // 清除read_writefile串流的狀態      
    read_writefile.clear();

    read_writefile.close();
    if (read_writefile.fail())
    {
        cout << "animal.bin檔案無法關閉!\n";
        exit(1);
    }
}

void showAnimalFile()
{
    struct animal data;
    ifstream readbinaryfile;

    readbinaryfile.open("animal.bin", ios_base::in | ios_base::binary);
    if (readbinaryfile.fail())
    {
        cout << "animal.bin檔案無法開啟!\n";
        exit(1);
    }

    cout.precision(1);
    cout.setf(ios::fixed);
    cout << "動物\t年齡\t身高\n";
    while (readbinaryfile.read((char*)&data, sizeof(struct animal)))
    {
        cout << data.name << '\t' << data.age << '\t' << data.height << '\n';
    }
    readbinaryfile.clear();
    readbinaryfile.close();
    if (readbinaryfile.fail())
    {
        cout << "animal.bin檔案無法關閉!\n";
        exit(1);
    }
}