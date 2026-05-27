#ifndef TEACHER_H
#define TEACHER_H
#include <iostream>
#include <string>
using namespace std ;
// 教師類別
class teacher
 {
   protected:
    int id;              // 編號
    string name;         // 姓名
    int course_id;       // 課程編號
    string course_name;  // 課程名稱
    int course_credit;   // 課程學分

   public:
    teacher( ) ;
    void data_input( ) ;
 } ;
#endif