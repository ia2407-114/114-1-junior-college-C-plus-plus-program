#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>


struct student {
    int id;
    char name[20];
    int computer, math;
    double avg;
};


void writeData(FILE* fPtr);
void readData(FILE* fPtr);

int main(void) {
    FILE* cfPtr;

    if ((cfPtr = fopen("students.dat", "rb+")) == NULL) {
        if ((cfPtr = fopen("students.dat", "wb+")) == NULL) {
            puts("檔案無法開啟或建立。");
            return 1;
        }
    }

    int choice;
    printf("請選擇功能 (1: 輸入資料, 2: 顯示資料, 0: 結束): ");
    scanf_s("%d", &choice);

    while (choice != 0) {
        switch (choice) {
        case 1:
            writeData(cfPtr);
            break;
        case 2:
            readData(cfPtr);
            break;
        default:
            puts("無效的選擇。");
            break;
        }
        printf("\n請選擇功能 (1: 輸入資料, 2: 顯示資料, 0: 結束): ");
        scanf_s("%d", &choice);
    }

    fclose(cfPtr);
    puts("程式執行結束。");
    return 0; 
}

void writeData(FILE* fPtr) {
    struct student temp = { 0, "", 0, 0, 0.0 };
    printf("\n輸入學號 (1-100, 0 結束): ");
    scanf_s("%d", &temp.id);

    while (temp.id != 0) {
        printf("輸入姓名, 電腦分數, 數學分數: ");
        
        scanf_s("%19s", temp.name, (unsigned int)sizeof(temp.name));
        scanf_s("%d%d", &temp.computer, &temp.math);

        temp.avg = (temp.computer + temp.math) / 2.0;

        
        fseek(fPtr, (temp.id - 1) * sizeof(struct student), SEEK_SET);
        fwrite(&temp, sizeof(struct student), 1, fPtr);

        printf("輸入下一個學號 (0 結束): ");
        scanf_s("%d", &temp.id);
    }
}


void readData(FILE* fPtr) {
    struct student temp = { 0, "", 0, 0, 0.0 };
    rewind(fPtr); 

    printf("\n%-6s%-20s%-10s%-10s%-10s\n", "ID", "Name", "Comp", "Math", "Avg");

    while (fread(&temp, sizeof(struct student), 1, fPtr) == 1) {
        if (temp.id != 0) {
            printf("%-6d%-20s%-10d%-10d%-10.2f\n",
                temp.id, temp.name, temp.computer, temp.math, temp.avg);
        }
    }
}