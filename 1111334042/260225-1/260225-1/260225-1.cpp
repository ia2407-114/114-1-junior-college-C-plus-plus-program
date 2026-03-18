#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 定義學生的資料結構
struct student {
    char name[20];
    int id;
    int computer;
    int math;
    double avg;
};

int main(void) {
    struct student my_stu[3]; // 建立 3 筆資料的結構陣列 (未初始化)
    FILE *cfPtr;

    printf("請依序輸入 3 位學生的資料：\n");
    
    // 透過迴圈讓使用者手動輸入 3 筆資料並計算平均
    for (int i = 0; i < 3; i++) {
        printf("\n第 %d 位學生 (請依序輸入 姓名 學號 計概成績 數學成績，中間以空白隔開):\n? ", i + 1);
        // 讀取輸入資料
        scanf("%19s %d %d %d", my_stu[i].name, &my_stu[i].id, &my_stu[i].computer, &my_stu[i].math);
        
        // 即時計算該位學生的平均成績
        my_stu[i].avg = (my_stu[i].computer + my_stu[i].math) / 2.0;
    }

    // 開啟檔案準備寫入
    if ((cfPtr = fopen("clients.txt", "w")) == NULL) {
        puts("檔案無法開啟！");
    } else {
        // 寫入欄位標題
        fprintf(cfPtr, "姓名\t學號\t計概成績\t數學成績\t平均成績\n");

        // 將剛才輸入並計算完的資料寫入檔案
        for (int i = 0; i < 3; i++) {
            fprintf(cfPtr, "%s\t%d\t%d\t\t%d\t\t%.2f\n", 
                    my_stu[i].name, 
                    my_stu[i].id, 
                    my_stu[i].computer, 
                    my_stu[i].math, 
                    my_stu[i].avg);
        }
        
        fclose(cfPtr); 
        puts("\n3筆學生資料已成功寫入 clients.txt 檔案中！");
    }

    return 0;
}
