#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include "260610-2.h"
using namespace std;

int writeAnimalFile()
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
    int i, n;
    string name;
    int age, height;

    cout << "請輸入動物種類數:";
    cin >> n;
    for (i = 1; i <= n; i++)
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

    return n;
}

void calculateAverage(int n)
{
    // 宣告型態為fstream的資料輸入/輸出串流物件變數read_writefile
    // 做為讀取/寫入檔案之用
    fstream read_writefile;

    // 以讀取寫入模式開啟檔案animal.txt
    // 新增的資料會寫到檔尾
    read_writefile.open("animal.txt", ios_base::in | ios_base::out);
    if (read_writefile.fail())
    {
        cout << "animal.txt檔案無法開啟!\n";
        exit(1);
    }
    string name;
    int age, height;

    getline(read_writefile, name);

    float total_age = 0, total_height = 0;
    int i;
    for (i = 1; i <= n; i++)
    {
        read_writefile >> name >> age >> height;
        if (read_writefile.fail())
        {
            cout << "讀取失敗\n";
            break;
        }
        total_age = total_age + age;
        total_height = total_height + height;
    }

    // 設定顯示小數一位 
    cout.precision(1);
    cout.setf(ios::fixed);
    read_writefile.precision(1);
    read_writefile.setf(ios::fixed);
    // 設定顯示小數一位

    cout << "平均年齡:" << total_age / n
        << "\t平均身高:" << total_height / n << '\n';

    // 將read_writefile串流的檔案指標移到檔尾 
    read_writefile.seekp(0, ios::end);

    read_writefile << "平均年齡:" << total_age / n
        << "\t平均身高:" << total_height / n << '\n';

    // 清除read_writefile串流的狀態      
    read_writefile.clear();

    read_writefile.close();
    if (read_writefile.fail())
    {
        cout << "animal.txt檔案無法關閉!\n";
        exit(1);
    }
}

void showAnimalFile()
{
    ifstream readfile;
    string line;

    readfile.open("animal.txt", ios_base::in);
    if (readfile.fail())
    {
        cout << "animal.txt檔案無法開啟!\n";
        exit(1);
    }

    while (getline(readfile, line))
    {
        cout << line << '\n';
    }

    readfile.close();
    if (readfile.fail())
    {
        cout << "animal.txt檔案無法關閉!\n";
        exit(1);
    }
}