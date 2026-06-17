#include <iostream>
#include <fstream>
#include <cctype>
#include <conio.h>
#include "movie.h"
using namespace std;

void movie::write() {
    // 宣告movie為struct cinema結構變數
    


    // 宣告型態為ofstream的資料輸出串流物件變數writebinaryfile 
    // 做為寫入檔案之用
    ofstream writebinaryfile;

    // 以二進制的寫入模式開啟movie.bin
    writebinaryfile.open("movie.bin", ios_base::out | ios_base::binary);
    if (writebinaryfile.fail())
    {
        cout << "movie.bin檔案無法開啟!\n";
        exit(1);
    }

    cout << "建立電影資訊:";
    for (int i = 1; i <= 5; i++)
    {
        cout << "\n電影名稱:";
        cin >> hi.name;
        cout << "上映日期:";
        cin >> hi.date;
        cout << "上映廳處:";
        cin >> hi.place;
        cout << "票價:";
        cin >> hi.price;

        // 將1筆cinema結構型態的資料到
        // writebinaryfile串流的檔案指標所在位置中 
        writebinaryfile.write((char*)&hi, sizeof(struct cinema));

        //cout << "是否繼續輸入? (y/n):";
    } //while (toupper(_getche()) == 'Y');
    // getche函式宣告在conio.h，toupper函式宣告在cctype

    cout << '\n';

    writebinaryfile.close();
    if (writebinaryfile.fail())
    {
        cout << "movie.bin檔案無法關閉!\n";
        exit(1);
    }

}

void movie::read() {
    // 宣告型態為ifstream的資料輸入串流物件變數readbinaryfile 
    // 做為讀取檔案之用
    ifstream readbinaryfile;

    // 以二進制的讀取模式開啟movie.bin
    readbinaryfile.open("movie.bin", ios_base::in | ios_base::binary);
    if (readbinaryfile.fail())
    {
        cout << "movie.bin檔案無法開啟!\n";
        exit(1);
    }
    cout << "電影資訊:\n";
    int i = 1;

    // 顯示所有的電影資訊 
    while (1)
    {
        // 讀取1筆cimena結構型態的資料，並存入movie結構變數
        readbinaryfile.read((char*)&hi, sizeof(struct cinema));

        // readbinaryfile串流的檔案指標不在檔尾 
        if (!readbinaryfile.eof())
            cout << i << ".電影名稱:" << hi.name << '\n';
        else
            break;
        i++;
    }

    // 清除readbinaryfile串流的狀態      
    readbinaryfile.clear();

    cout << "輸入要看的電影名稱之序號:";
    int no;  // 電影名稱序號
    cin >> no;

    // 將檔案指標移動到距離檔頭
    // 「sizeof(struct cinema)*(no-1)」個位元組的位置
    readbinaryfile.seekg(sizeof(struct cinema) * (no - 1), ios::beg);

    // 讀取1筆cimena結構型態的資料，並存入movie結構變數
    readbinaryfile.read((char*)&hi, sizeof(struct cinema));

    // 資readbinaryfile串流的檔案指標不在檔尾 
    if (!readbinaryfile.eof())
        cout << "電影名稱:" << hi.name << '\t'
        << "上映日期:" << hi.date << '\n'
        << "上映廳處:" << hi.place << '\t'
        << "票價:" << hi.price << '\n';
    else
        cout << "查無電影資料:\n";

    // 清除readbinaryfile串流的狀態      
    readbinaryfile.clear();

    readbinaryfile.close();
    if (readbinaryfile.fail())
    {
        cout << "movie.bin檔案無法關閉!\n";
        exit(1);
    }

    
}

