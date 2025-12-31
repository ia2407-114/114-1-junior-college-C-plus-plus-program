#include <stdio.h>
#include <string.h>

#define SIZE 10

// 1. 自定義字串複製函數
void copy1(char* s1, const char* s2) {
    for (; ((*s1 = *s2) != '\0'); ++s1, ++s2);
}

// 2. 交換整數函數
void swap(int* ptr1, int* ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

// 3. 交換浮點數函數
void swap_f(float* ptr1, float* ptr2) {
    float temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

// 4. 排序副程式：依據「學號」由小到大排序 (二元搜尋的前提)
void sort_by_id(char name[][20], int stu[][SIZE], float avg[], int n) {
    int i, j;
    char temp_name[20];
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (stu[0][j] > stu[0][j + 1]) { // 依學號排序
                copy1(temp_name, name[j]);
                copy1(name[j], name[j + 1]);
                copy1(name[j + 1], temp_name);
                swap(&stu[0][j], &stu[0][j + 1]);
                swap(&stu[1][j], &stu[1][j + 1]);
                swap(&stu[2][j], &stu[2][j + 1]);
                swap_f(&avg[j], &avg[j + 1]);
            }
        }
    }
}

// 5. 二元搜尋副程式
int binarySearch(const int b[], int searchKey, int low, int high) {
    while (low <= high) {
        int middle = (low + high) / 2;
        if (searchKey == b[middle]) {
            return (int)middle; // 找到學號，回傳索引位置
        }
        else if (searchKey < b[middle]) {
            high = middle - 1;
        }
        else {
            low = middle + 1;
        }
    }
    return -1; // 未找到
}

int main() {
    const char* stu_name[SIZE] = { "Danny","Mary","Jimmy","Peter","Sue","John","Hearts", "Diamonds","Clubs","Spades" };
    char stu1_name[SIZE][20];
    int stu[3][SIZE] = { { 11, 15, 13, 18, 12, 17, 14, 19, 16, 20 }, // 學號
                         { 85, 92, 78, 85, 90, 85, 76, 95, 88, 85 }, // 計概
                         { 70, 80, 75, 90, 85, 70, 82, 92, 88, 70 } }; // 數學
    float average_scores[SIZE];
    int i, searchID, resultPos;

    // A. 初始化：計算平均分數並複製姓名
    for (i = 0; i < SIZE; i++) {
        copy1(stu1_name[i], stu_name[i]);
        average_scores[i] = (stu[1][i] + stu[2][i]) / 2.0f;
    }

    // B. 自動排序：為了讓二元搜尋運作，必須先依學號排序（不印出）
    sort_by_id(stu1_name, stu, average_scores, SIZE);

    // C. 輸入搜尋鍵值
    printf("請輸入欲查詢的學號: ");
    scanf_s("%d", &searchID);

    // D. 執行搜尋
    resultPos = binarySearch(stu[0], searchID, 0, SIZE - 1);

    // E. 輸出搜尋結果
    if (resultPos != -1) {
        printf("所在陣列位置: %d\n", resultPos);
        printf("學生姓名: %s\n", stu1_name[resultPos]);
        printf("計算機概論成績: %d\n", stu[1][resultPos]);
        printf("數學成績: %d\n", stu[2][resultPos]);
        printf("平均成績: %.2f\n", average_scores[resultPos]);
    }
    else {
        printf("\n找不到學號為 %d 的學生。\n", searchID);
    }

    return 0;
}