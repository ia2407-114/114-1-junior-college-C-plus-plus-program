#include <stdio.h>
#include <string.h>
#define SIZE 10

struct student {
    char name[20];
    int id;
    int cs;
    int math;
    float average;
};


void swap_student(struct student* ptr1, struct student* ptr2) {
    struct student temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}


void sort_by_id(struct student* st, int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (st[j].id > st[j + 1].id) {
                swap_student(&st[j], &st[j + 1]);
            }
        }
    }
}


size_t binarySearch(const struct student st[], int searchKey, size_t low, size_t high)
{
    while (low <= high) {
        size_t middle = (low + high) / 2;
        if (searchKey == st[middle].id) {
            return middle;
        }

        else if (searchKey < st[middle].id) {
            high = middle - 1;
        }

        else {
            low = middle + 1;
        }
    }

    return -1;
}

int main() {
    struct student stu[SIZE] = {
        {"Danny", 11, 85, 70},
        {"Mary", 15, 92, 80},
        {"Jimmy", 13, 78, 75},
        {"Peter", 18, 85, 90},
        {"Sue", 12, 90, 85},
        {"John", 17, 85, 70},
        {"Hearts", 14, 76, 82},
        {"Diamonds", 19, 95, 92},
        {"Clubs", 16, 88, 88},
        {"Spades", 20, 85, 70}
    };

    int i;
    for (i = 0; i < SIZE; i++) {
        stu[i].average = (stu[i].cs + stu[i].math) / 2.0;
    }

    sort_by_id(stu, SIZE);

    printf("目前資料庫內容（已依學號排序）：\n");
    printf("姓名\t學號\t計概成績\t數學成績\t平均成績\n");
    for (i = 0; i < SIZE; i++) {
        printf("%s\t%d\t    %d\t\t    %d\t\t    %f\t\n", stu[i].name, stu[i].id, stu[i].cs, stu[i].math, stu[i].average);
    }


    int search_id;
    printf("\n請輸入欲搜尋的學號：");
    scanf_s("%d", &search_id);


    int result_index = binarySearch(stu, search_id, 0, SIZE - 1);

    if (result_index != -1) {
        printf("姓名\t學號\t計概成績\t數學成績\t平均成績\n");
        printf("%s\t%d\t    %d\t\t    %d\t\t    %f\t\n",
            stu[result_index].name,
            stu[result_index].id,
            stu[result_index].cs,
            stu[result_index].math,
            stu[result_index].average);
    }
    else {
        printf("\n找不到學號為 %d 的資料。\n", search_id);
    }

    return 0;
}