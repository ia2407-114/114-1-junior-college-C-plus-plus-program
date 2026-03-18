#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

// 定義學生結構
struct student {
    int id;
    char name[20];
    int computer, math;
    double avg;
};

int main(void)
{
    FILE* cfPtr; // 檔案指標

    // 以「讀寫」模式 (rb+) 開啟已建立的二進位檔案
    // 注意：使用 rb+ 時，檔案必須已經存在
    if ((cfPtr = fopen("students.dat", "rb+")) == NULL) {
        puts("檔案無法開啟。請確認已經先建立了空白的 students.dat 檔案。");
    }
    else {
        // 建立並初始化學生結構
        struct student s = { 0, "", 0, 0, 0.0 };

        // 提示輸入學號
        printf("%s", "請輸入學號 (輸入 0 結束): ");
        scanf_s("%d", &s.id);

        // 當輸入的學號不為 0 時，持續寫入資料
        while (s.id != 0) {
            // 提示輸入姓名 (scanf_s 讀取字串需指定緩衝區大小)
            printf("%s", "請輸入姓名: ");
            scanf_s("%19s", s.name, (unsigned int)sizeof(s.name));

            // 提示輸入成績
            printf("%s", "請輸入電腦成績與數學成績 (以空白分隔): ");
            scanf_s("%d %d", &s.computer, &s.math);

            // 計算平均成績
            s.avg = (s.computer + s.math) / 2.0;

            // 將檔案指標移動到對應學號的正確位置
            // 假設學號從 1 開始，(s.id - 1) 代表偏移的紀錄筆數
            fseek(cfPtr, (s.id - 1) * sizeof(struct student), SEEK_SET);

            // 將結構資料寫入檔案
            fwrite(&s, sizeof(struct student), 1, cfPtr);

            // 提示下一次輸入
            printf("\n%s", "請輸入下一個學號 (輸入 0 結束): ");
            scanf_s("%d", &s.id);
        }

        // 關閉檔案
        fclose(cfPtr);
        puts("資料輸入完畢，檔案已儲存。");
    }

    return 0;
}