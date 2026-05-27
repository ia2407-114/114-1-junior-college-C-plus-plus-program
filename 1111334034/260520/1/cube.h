#ifndef CUBE_H
#define CUBE_H
#include "rectangle.h"
// 長方體類別
class cube:public rectangle
 {
   private:
     float height ; // 長方體的高
     
   public:
     void data_input() ;
 } ;
#endif
