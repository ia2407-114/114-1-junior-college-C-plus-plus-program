#include <stdio.h>
#include <string.h>

#define SIZE 10


void copy1(char* s1, const char* s2) {
    for (; ((*s1 = *s2) != '\0'); ++s1, ++s2);
}


void swap_float(float* a, float* b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}


void swap_int(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


void swap_ptr(const char** a, const char** b) {
    const char* temp = *a;
    *a = *b;
    *b = temp;
}


void sort_array(const char* name[], int stu[SIZE][3], float avg[], int n) {
    int i, j, k;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (avg[j] < avg[j + 1]) {
               
                swap_ptr(&name[j], &name[j + 1]);

                for (k = 0; k < 3; k++) {
                    swap_int(&stu[j][k], &stu[j + 1][k]);
                }

                
                swap_float(&avg[j], &avg[j + 1]);
            }
        }
    }
}

int main() {
   
    const char* stu_name[SIZE] = { "Danny","Mary","Jimmy","Peter","Sue","John","Hearts", "Diamonds","Clubs","Spades" };

    
    int stu[SIZE][3] = {
        {11, 85, 70}, {15, 92, 80}, {13, 78, 75}, {18, 85, 90}, {12, 90, 85},
        {17, 85, 70}, {14, 76, 82}, {19, 95, 92}, {16, 88, 88}, {20, 85, 70}
    };

  
    float average_scores[SIZE];

 
    for (int i = 0; i < SIZE; i++) {
        average_scores[i] = (stu[i][1] + stu[i][2]) / 2.0f;
    }

    printf("排序前：\n");
    printf("%-10s\t%-8s\t%-8s\t%-8s\t%-8s\n", "姓名", "學號", "計概", "數學", "平均");
    for (int i = 0; i < SIZE; i++) {
        printf("%-10s\t%d\t%d\t%d\t%.2f\n", stu_name[i], stu[i][0], stu[i][1], stu[i][2], average_scores[i]);
    }

    sort_array(stu_name, stu, average_scores, SIZE);

    printf("\n排序後（依平均成績由大到小）：\n");
    printf("%-10s\t%-8s\t%-8s\t%-8s\t%-8s\n", "姓名", "學號", "計概", "數學", "平均");
    for (int i = 0; i < SIZE; i++) {
        printf("%-10s\t%d\t%d\t%d\t%.2f\n", stu_name[i], stu[i][0], stu[i][1], stu[i][2], average_scores[i]);
    }

    return 0;
}