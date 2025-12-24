#include <stdio.h>
#include <string.h>
#define SIZE 10


void copy1(char* s1, const char* s2)
{
	for (; ((*s1 = *s2) != '\0'); ++s1, ++s2);
}

void swap_int(int* i1, int* i2) {
	int temp;
	temp = *i1;
	*i1 = *i2;
	*i2 = temp;
}

void swap_float(float* f1, float* f2) {
	float temp;
	temp = *f1;
	*f1 = *f2;
	*f2 = temp;
}

void swap_str(char* s1, char* s2) {
	char temp_name[20];
	copy1(temp_name, s1);
	copy1(s1, s2);
	copy1(s2, temp_name);
}

void sort_array(char name[][20], int stu[][SIZE], float avg[], int n) {
	int i, j, temp;
	float temp1;

	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - 1 - i; j++) {
			if (avg[j] < avg[j + 1]) {

				swap_str(name[j], name[j + 1]);

				swap_int(&stu[0][j], &stu[0][j + 1]);

				swap_int(&stu[1][j], &stu[1][j + 1]);

				swap_int(&stu[2][j], &stu[2][j + 1]);

				swap_float(&avg[j], &avg[j + 1]);

			}
		}
	}
}




int main() {
	const char* stu_name[SIZE] = { "Danny","Mary","Jimmy","Peter","Sue","John","Hearts", "Diamonds","Clubs","Spades" };
	char stu1_name[10][20];
	for (int i = 0; i < SIZE; i++)
		copy1(stu1_name[i], stu_name[i]);

	int stu[3][SIZE] = { { 11, 15, 13, 18, 12, 17, 14, 19, 16, 20 },
						 { 85, 92, 78, 85, 90, 85, 76, 95, 88, 85 },
						 { 70, 80, 75, 90, 85, 70, 82, 92, 88, 70 } };

	float average_scores[SIZE];

	int i;

	printf("排序前：\n");
	printf("姓名\t學號\t計概成績\t數學成績\t平均成績\n"); \
		for (i = 0; i < SIZE; i++) {
			average_scores[i] = (stu[1][i] + stu[2][i]) / 2.0;
		}
	for (i = 0; i < SIZE; i++) {
		printf("%s\t%d\t    %d\t\t    %d\t\t    %f\t\n", stu1_name[i], stu[0][i], stu[1][i], stu[2][i], average_scores[i]);
	}


	sort_array(stu1_name, stu, average_scores, SIZE);

	printf("\n排序後（依平均成績）：\n");
	printf("姓名\t學號\t計概成績\t數學成績\t平均成績\n"); \

		for (i = 0; i < SIZE; i++) {
			printf("%s\t%d\t    %d\t\t    %d\t\t    %f\t\n", stu1_name[i], stu[0][i], stu[1][i], stu[2][i], average_scores[i]);
		}


	return 0;
}