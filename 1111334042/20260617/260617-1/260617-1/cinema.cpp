#include <iostream>
#include <fstream>
#include "Cinema.h"

using namespace std;

void CinemaManager::createMovies(int count) {
    ofstream writebinaryfile(filename, ios_base::out | ios_base::binary);

    if (writebinaryfile.fail()) {
        cout << filename << " 檔案無法開啟!\n";
        exit(1);
    }

    cout << "--- 建立 " << count << " 筆電影資訊 ---\n";
    for (int i = 0; i < count; i++) {
        struct cinema movie;
        cout << "\n[輸入第 " << i + 1 << " 筆資料]\n";

        cout << "電影名稱: ";
        cin >> movie.name;

        cout << "上映日期: ";
        cin >> movie.date;

        cout << "上映廳處: ";
        cin >> movie.place;

        cout << "票價: ";
        cin >> movie.price;

      
        writebinaryfile.write((char*)&movie, sizeof(struct cinema));
    }

    writebinaryfile.close();
    cout << "\n資料建立完成。\n";
}

void CinemaManager::listMovies() {
    ifstream readbinaryfile(filename, ios_base::in | ios_base::binary);

    if (readbinaryfile.fail()) {
        cout << filename << " 檔案無法開啟!\n";
        exit(1);
    }

    cout << "\n--- 電影資訊列表 ---\n";
    int i = 1;
    struct cinema movie;

    
    while (readbinaryfile.read((char*)&movie, sizeof(struct cinema))) {
        cout << i << ". 電影名稱: " << movie.name << '\n';
        i++;
    }

    readbinaryfile.close();
}

void CinemaManager::searchMovie(int no) {
    ifstream readbinaryfile(filename, ios_base::in | ios_base::binary);

    if (readbinaryfile.fail()) {
        cout << filename << " 檔案無法開啟!\n";
        exit(1);
    }

    readbinaryfile.seekg(sizeof(struct cinema) * (no - 1), ios::beg);

    struct cinema movie;
    readbinaryfile.read((char*)&movie, sizeof(struct cinema));

    
    if (!readbinaryfile.eof() && !readbinaryfile.fail()) {
        cout << "\n--- 查詢結果 ---\n";
        cout << "電影名稱: " << movie.name << '\t'
            << "上映日期: " << movie.date << '\n'
            << "上映廳處: " << movie.place << '\t'
            << "票價: " << movie.price << '\n';
    }
    else {
        cout << "\n查無此電影資料！\n";
    }

    readbinaryfile.close();
}