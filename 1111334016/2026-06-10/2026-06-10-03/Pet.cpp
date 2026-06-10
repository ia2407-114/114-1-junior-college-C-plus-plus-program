#include <iostream>
#include <fstream>
#include <string>
#include "Pet.h"
using namespace std;

void pet::input() {
    ofstream writebinaryfile;
    // 使用 ios_base::binary 開啟
    writebinaryfile.open("animal.bin", ios_base::out | ios_base::binary);
    if (writebinaryfile.fail()) {
        cout << "animal.bin 檔案無法開啟!\n";
        exit(1);
    }

    writebinaryfile << "動物\t\t年齡\t\t身高\n";

    string input_name;
    int input_age, input_height;

    for (int i = 1; i <= 3; i++) {
        cout << "輸入第" << i << "種動物名稱，年齡及身高(以空白鍵作區隔):\n";
        cin >> input_name >> input_age >> input_height;
        writebinaryfile << input_name << "\t\t" << input_age << "\t\t" << input_height << "\n";

        if (writebinaryfile.fail()) {
            cout << "寫入失敗\n";
            break;
        }
    }
    writebinaryfile.close();
}

void pet::read() {
    fstream read_writebinaryfile;
    // 【修正點 1】必須加上 ios_base::out，後面才能執行寫入
    read_writebinaryfile.open("animal.bin", ios_base::in | ios_base::out | ios_base::binary);
    if (read_writebinaryfile.fail()) {
        cout << "animal.bin 檔案無法開啟!\n";
        exit(1);
    }

    // 讀取並跳過標頭
    string header;
    getline(read_writebinaryfile, header);

    float total_age = 0, total_height = 0;
    for (int j = 1; j <= 3; j++) {
        read_writebinaryfile >> name >> age >> height;
        if (read_writebinaryfile.fail()) {
            break;
        }
        total_age += age;
        total_height += height;
    }

    // 【修正點 2】移到檔尾準備寫入平均值（使用 seekp 處理寫入指標）
    read_writebinaryfile.clear(); // 清除前面的 EOF (檔案結尾) 狀態才能繼續寫入
    read_writebinaryfile.seekp(0, ios::end);

    // 設定顯示格式
    cout.precision(1);
    cout.setf(ios::fixed);

    // 格式化寫回檔案中
    read_writebinaryfile << "平均年齡:" << total_age / 3.0f << "\t平均身高:" << total_height / 3.0f << "\n";
    read_writebinaryfile.close();

    // 【修正點 3】題目要求：「最後，將整個檔案內容讀取出來並列印到螢幕中」
    cout << "\n--- 重新讀取整個檔案內容 ---\n";
    ifstream view_file("animal.bin", ios_base::in | ios_base::binary);
    string line;
    while (getline(view_file, line)) {
        cout << line << endl;
    }
    view_file.close();
}