#include <stdio.h>
#define SIZE 20 // 定義陣列大小

// 函數 main 開始執行
int main(void)
{
    // 原始數據
    int id[SIZE] = { 12, 13, 14, 15, 16, 17, 19, 21, 22, 23, 24, 26, 27, 28, 29, 31, 32, 33, 36, 37 };
    int score[SIZE] = { 66, 67, 66, 70, 73, 74, 75, 75, 62, 32, 44, 46, 27, 12, 80, 63, 66, 90, 11, 66 };

    int i, j;      // 迴圈控制變數
    int temp_score; // 用於交換成績時的暫存變數
    int temp_id;    // 用於交換學號時的暫存變數

    // 1. 使用氣泡排序法 (Bubble Sort)
    // 目標：將 score[] 由小到大排序
    for (i = 0; i < SIZE - 1; i++) { // 外層迴圈：控制排序趟數
        for (j = 0; j < SIZE - 1 - i; j++) { // 內層迴圈：進行元素比較與交換

            // 比較相鄰兩個成績，如果前一個比後一個大，則交換
            if (score[j] > score[j + 1]) {

                // a) 交換成績 (score)
                temp_score = score[j];
                score[j] = score[j + 1];
                score[j + 1] = temp_score;

                // b) 同步交換對應的學號 (id)
                // 必須使用與成績相同的邏輯進行交換，才能保持配對正確
                temp_id = id[j];
                id[j] = id[j + 1];
                id[j + 1] = temp_id;
            }
        }
    }

    // 2. 印出排序後的結果
    printf("--- 排序結果 (依成績由小到大) ---\n");
    printf("%8s%10s\n", "學號", "計概成績");
    printf("---------------------------\n");

    for (i = 0; i < SIZE; i++) {
        printf("%8d%10d\n", id[i], score[i]);
    }

    return 0;
}