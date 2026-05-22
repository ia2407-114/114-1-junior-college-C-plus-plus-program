#include <iostream>
#include <string>
using namespace std;
#include "ya.h"

student::student()
{
    cout << "輸入學生的學號:";
    cin >> id;
    cout << "輸入學生的名字:";
    cin >> name;
    cout << endl;

}






teacher::teacher()
{
    cout << "輸入教師的學號:";
    cin >> teacher_id;
    cout << "輸入教師的姓名:";
    cin >> teacher_name;
    cout << endl;
}
void teacher::data_input() 
{
    cout << "輸入課程編號:";
    cin >> course_id;
    cout << "輸入課程名稱:";
    cin >> course_name;
    cout << "輸入學分:";
    cin >> course_credit;
    cout << endl;
}



void show::display()
{
    cout << "\n學生的學號:" << id << endl;
    cout << "學生的名字:" << name << endl;
    cout << "\n教師的學號:" << teacher_id << endl;
    cout << "教師的名字:" << teacher_name << endl;
    cout << "\n課程編號:" << course_id << endl;
    cout << "課程名稱:" << course_name << endl;
    cout << "學分:" << course_credit << endl;
}




