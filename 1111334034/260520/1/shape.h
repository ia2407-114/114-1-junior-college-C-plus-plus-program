#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
#include <string>
using namespace std ;
// 圖形類別 
class shape
 {
   protected:
     string name ;      // 圖形名稱
     float shape_area ; // 圖形面積
     
   public:
     void area() ;
 } ;
#endif
