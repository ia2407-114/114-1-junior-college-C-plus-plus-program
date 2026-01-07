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

void sort_array(struct student* st, int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (st[j].average < st[j + 1].average) {
                swap_student(&st[j], &st[j + 1]);
            }
        }
    }
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

    printf("排序前：\n");
    printf("姓名\t學號\t計概成績\t數學成績\t平均成績\n");
    for (i = 0; i < SIZE; i++) {
       
        printf("%s\t%d\t    %d\t\t    %d\t\t    %f\t\n", stu[i].name, stu[i].id, stu[i].cs, stu[i].math, stu[i].average);
    }

   
    sort_array(stu, SIZE);

    printf("\n排序後（依平均成績）：\n");
    printf("姓名\t學號\t計概成績\t數學成績\t平均成績\n");
    for (i = 0; i < SIZE; i++) {
       
        printf("%s\t%d\t    %d\t\t    %d\t\t    %f\t\n", stu[i].name, stu[i].id, stu[i].cs, stu[i].math, stu[i].average);
    }

    return 0;
}