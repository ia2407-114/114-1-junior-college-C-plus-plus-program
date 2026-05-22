#include <iostream>
#include <string>
#include "ya.h"

using namespace std;
/*題目2:（多重繼承）寫一程式，定義類別student，
其成員變數有編號id、姓名name(使用建構子函數輸入)。
再定義類別teacher，其成員變數有編號id、姓名name(使用建構子函數輸入)、
課程編號course_id、課程名稱course_name 與學分course_credit，
及成員函式data_input( )作為教師的課程編號、課程名稱與學分輸入之用。
最後定義同時繼承teacher及student的衍生類別classroom，且其成員函式為show()，
用來顯示此classroom內的課程資料、課程名稱與學分，以及教師與學生的姓名。*/

/*建構元（如 student()）：是物件建立時系統**自動執行一次的特殊初始化函式，後續不應手動呼叫，否則會導致資料被重複輸入並覆蓋。*/
/*一般成員函式（如data_input()）：系統在物件建立時不會自動執行，它就像工具箱裡的工具，必須在main函式中手動呼叫才會第一次執行，因此能規矩且正確地完成輸入。*/
int main()
{
    
    show show1;
    
    show1.teacher::data_input();
    show1.show::display();
    return 0;
}
