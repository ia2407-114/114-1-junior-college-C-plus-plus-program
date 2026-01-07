#include <stdio.h>
#include <string.h>
#define SIZE 10

struct student {
	char name[20];
	int id;
	int CS;
	int math;
	float avg;
};

void copy1(char* s1, const char* s2)
{
	for (; ((*s1 = *s2) != '\0'); ++s1, ++s2);
}
void swap(int* prt1, int* prt2) {
	int temp = *prt1;
	*prt1 = *prt2;
	*prt2 = temp;
}
void swap_f(float* prt1, float* prt2) {
	float temp = *prt1;
	*prt1 = *prt2;
	*prt2 = temp;
}
void swap_student(student* prt1, student* prt2) {
	student temp = *prt1;
	*prt1 = *prt2;
	*prt2 = temp;
}
void sort_student(student stu[SIZE], int n) {
	int i, j, temp;
	float temp1;
	char temp_name[20];

	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - 1 - i; j++) {
			if (stu[j].avg < stu[j + 1].avg) {
				swap_student(&stu[j], &stu[j + 1]);
				//copy1(temp_name, stu[j].name);
				//copy1(stu[j].name, stu[j + 1].name);
				//copy1(stu[j + 1].name, temp_name);
				//swap(&stu[j].id, &stu[j + 1].id);
				//swap(&stu[j].CS, &stu[j+1].CS);
				//swap(&stu[j].math, &stu[j + 1].math);
				//swap_f(&stu[j].avg, &stu[j+1].avg);
			}
		}
	}
}

int main() {
	student stu[SIZE] = {
		{"Danny",11,85,70},
		{"Mary",15,92,80},
		{"Jimmy",13,78,75},
		{"Peter",18,85,90},
		{"Sue",12,90,85},
		{"John",17,85,70},
		{"Hearts",14,76,82},
		{ "Diamonds",19,95,92},
		{"Clubs",16,88,88},
		{"Spades" ,20,85,70}
	};

	int i;
	for (i = 0; i < SIZE; i++) {
		stu[i].avg = (stu[i].CS + stu[i].math) / 2.f;
	}

	printf("排序前：\n");
	printf("姓名\t學號\t計概成績\t數學成績\t平均成績\n");

	for (i = 0; i < SIZE; i++) {
		printf("%s\t%d\t    %d\t\t    %d\t\t    %f\t\n", stu[i].name, stu[i].id, stu[i].CS, stu[i].math, stu[i].avg);
	}


	sort_student(stu, SIZE);

	printf("\n排序後（依平均成績）：\n");
	printf("姓名\t學號\t計概成績\t數學成績\t平均成績\n"); \

		for (i = 0; i < SIZE; i++) {
			printf("%s\t%d\t    %d\t\t    %d\t\t    %f\t\n", stu[i].name, stu[i].id, stu[i].CS, stu[i].math, stu[i].avg);
		}


	return 0;
}