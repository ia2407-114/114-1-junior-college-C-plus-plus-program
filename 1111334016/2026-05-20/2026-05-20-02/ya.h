#pragma once
#include <string>
using namespace std;
// 飛行物體類別 
class student
{
private:
       

public:
    string name;
    int id;
    student();

    
};

// 水上航行物體類別 
class teacher
{
public:
    int teacher_id;  // 噴水推進器名稱 
    string teacher_name;
    int course_id;
    string course_name;
    int course_credit;
    // teacher類別建構元函式,設定飛行物的資料
    teacher();
    void data_input();
    
};

// 大型客機類別
class show :public student,public teacher
{
private:
    

public:
    void display();
};


