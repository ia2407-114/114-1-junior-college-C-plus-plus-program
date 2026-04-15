// Fig. 12.3: fig12_03.c
// Inserting and deleting nodes in a list
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 學生資料結構體（自我參照結構）
struct student {
    int id;                      // 學號
    char name[20];               // 姓名
    int computer, math;          // 計算機和數學成績
    double avg;                  // 平均成績
    struct student *nextPtr;     // 指向下一個節點的指標
};

typedef struct student Student;       // 定義 Student 別名
typedef Student *StudentPtr;          // 定義 StudentPtr 指標別名

// 函數原型
void insertStudent(StudentPtr *sPtr, int id, const char *name, int computer, int math);
void printStudentList(StudentPtr currentPtr);
int isEmpty(StudentPtr sPtr);



int main(void)
{
   StudentPtr startPtr = NULL; // 初始化鏈結串列頭指標為 NULL

   printf("=== 學生資料鏈結串列系統 ===\n\n");

   // 插入多筆學生資料
   printf("插入學生資料中...\n");
   insertStudent(&startPtr, 101, "張小明", 85, 90);
   insertStudent(&startPtr, 103, "李小華", 78, 88);
   insertStudent(&startPtr, 102, "王大同", 92, 85);
   insertStudent(&startPtr, 105, "陳美美", 88, 92);
   insertStudent(&startPtr, 104, "林志明", 95, 89);

   printf("\n學生資料已建立完成！\n\n");

   // 列印所有學生資料
   printStudentList(startPtr);

   puts("\n程式執行結束。");
   return 0;
}

// 檢查鏈結串列是否為空
int isEmpty(StudentPtr sPtr)
{
   return sPtr == NULL;
}

// 插入學生資料到鏈結串列（依學號排序）
void insertStudent(StudentPtr *sPtr, int id, const char *name, int computer, int math)
{
   StudentPtr newPtr = (StudentPtr)malloc(sizeof(Student)); // 配置新節點記憶體

   if (newPtr != NULL) { // 檢查記憶體是否配置成功
      // 設定新節點的資料
      newPtr->id = id;
      strcpy(newPtr->name, name);
      newPtr->computer = computer;
      newPtr->math = math;
      newPtr->avg = (computer + math) / 2.0; // 計算平均成績
      newPtr->nextPtr = NULL;

      StudentPtr previousPtr = NULL;
      StudentPtr currentPtr = *sPtr;

      // 尋找正確的插入位置（依學號由小到大排序）
      while (currentPtr != NULL && id > currentPtr->id) {
         previousPtr = currentPtr;
         currentPtr = currentPtr->nextPtr;
      }

      // 插入新節點到串列開頭
      if (previousPtr == NULL) {
         newPtr->nextPtr = *sPtr;
         *sPtr = newPtr;
      }
      else { // 插入新節點到 previousPtr 和 currentPtr 之間
         previousPtr->nextPtr = newPtr;
         newPtr->nextPtr = currentPtr;
      }

      printf("學號 %d (%s) 已成功插入\n", id, name);
   }
   else {
      printf("學號 %d 插入失敗：記憶體不足\n", id);
   }
}

// 列印學生鏈結串列
void printStudentList(StudentPtr currentPtr)
{
   // 檢查串列是否為空
   if (isEmpty(currentPtr)) {
      puts("學生串列為空。\n");
   }
   else {
      puts("=== 學生資料列表 ===");
      printf("%-8s %-12s %-8s %-8s %-8s\n", "學號", "姓名", "計算機", "數學", "平均");
      printf("--------------------------------------------------\n");

      // 走訪整個鏈結串列
      while (currentPtr != NULL) {
         printf("%-8d %-12s %-8d %-8d %-8.2f\n",
                currentPtr->id,
                currentPtr->name,
                currentPtr->computer,
                currentPtr->math,
                currentPtr->avg);
         currentPtr = currentPtr->nextPtr;
      }

      printf("--------------------------------------------------\n");
   }
}