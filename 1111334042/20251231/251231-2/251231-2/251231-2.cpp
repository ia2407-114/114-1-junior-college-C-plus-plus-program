#include <stdio.h>
#include <string.h>

#define SIZE 10


struct student {
    int id;          
    int computer;    
    int math;        
    char name[20];   
    float avg;       
};


void copy1(char* s1, const char* s2) {
    for (; ((*s1 = *s2) != '\0'); ++s1, ++s2);
}

int main() {
    
    const char* raw_names[SIZE] = { "Danny","Mary","Jimmy","Peter","Sue","John","Hearts", "Diamonds","Clubs","Spades" };
    int raw_ids[SIZE] = { 11, 15, 13, 18, 12, 17, 14, 19, 16, 20 };
    int raw_comp[SIZE] = { 85, 92, 78, 85, 90, 85, 76, 95, 88, 85 };
    int raw_math[SIZE] = { 70, 80, 75, 90, 85, 70, 82, 92, 88, 70 };

    
    struct student stud[SIZE];

    
    for (int i = 0; i < SIZE; i++) {
        stud[i].id = raw_ids[i];
        stud[i].computer = raw_comp[i];
        stud[i].math = raw_math[i];
        copy1(stud[i].name, raw_names[i]);
    }

    
    for (int i = 0; i < SIZE; i++) {
        stud[i].avg = (stud[i].computer + stud[i].math) / 2.0f;
    }

    
    printf("--- 學生結構陣列內容 ---\n");
    printf("%-10s\t%-8s\t%-8s\t%-8s\t%-8s\n", "姓名", "學號", "計概", "數學", "平均");
    printf("------------------------------------------------------------\n");

    for (int i = 0; i < SIZE; i++) {
        printf("%-10s\t%d\t%d\t%d\t%.2f\n",
            stud[i].name,
            stud[i].id,
            stud[i].computer,
            stud[i].math,
            stud[i].avg);
    }

    return 0;
}