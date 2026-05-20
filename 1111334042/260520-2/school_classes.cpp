#include "school_classes.h"
#include <iostream>

using namespace std;

student::student() {
    cout << "\n--- 輸入學生資料 ---" << endl;
    cout << "請輸入學生編號: ";
    cin >> id;
    cout << "請輸入學生姓名: ";
    cin >> name;
}

teacher::teacher() {
    cout << "\n--- 輸入教師資料 ---" << endl;
    cout << "請輸入教師編號: ";
    cin >> id;
    cout << "請輸入教師姓名: ";
    cin >> name;
}

void teacher::data_input() {
    cout << "\n--- 輸入課程資料 ---" << endl;
    cout << "請輸入課程編號: ";
    cin >> course_id;
    cout << "請輸入課程名稱: ";
    cin >> course_name;
    cout << "請輸入學分: ";
    cin >> course_credit;
}

void classroom::show() {
    cout << "\n=== 教室資料顯示 ===" << endl;
    cout << "課程編號: " << course_id << endl;
    cout << "課程名稱: " << course_name << endl;
    cout << "學分數: " << course_credit << endl;
    cout << "授課教師姓名: " << teacher::name << endl;
    cout << "上課學生姓名: " << student::name << endl;
}
