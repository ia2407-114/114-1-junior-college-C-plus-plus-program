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
size_t binarySearch(student b[], int searchKey, size_t low, size_t high)
{
	// loop until low index is greater than high index
	while (low <= high) {

		// determine middle element of subarray being searched
		size_t middle = (low + high) / 2;

		// display subarray used in this loop iteration

		// if searchKey matched middle element, return middle
		if (searchKey == b[middle].id) {
			return middle;
		}

		// if searchKey is less than middle element, set new high
		else if (searchKey < b[middle].id) {
			high = middle - 1; // search low end of array      
		}

		// if searchKey is greater than middle element, set new low
		else {
			low = middle + 1; // search high end of array        
		}
	} // end while

	return -1; // searchKey not found
}

void swap_student(student* prt1, student* prt2) {
	student temp = *prt1;
	*prt1 = *prt2;
	*prt2 = temp;
}
void sort_student(student stu[SIZE], int n) {
	int i, j;
	student temp;

	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - 1 - i; j++) {
			if (stu[j].avg < stu[j + 1].avg) {
				swap_student(&stu[j], &stu[j + 1]);

				temp = stu[j + 1];
				stu[j + 1] = stu[j];
				stu[j] = temp;

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
		{"Sue",12,90,85},
		{"Jimmy",13,78,75},
		{"Hearts",14,76,82},
		{"Mary",15,92,80},
		{"Clubs",16,88,88},
		{"John",17,85,70},
		{"Peter",18,85,90},
		{"Diamond",19,95,92},
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

	printf("\n搜尋學生ID：");
	int search_id;
	scanf_s("%d", &search_id);

	int result = binarySearch(stu, search_id, 0, SIZE - 1);
	printf("搜尋結果：\n");
	printf("姓名\t學號\t計概成績\t數學成績\t平均成績\n");
	printf("%s\t%d\t    %d\t\t    %d\t\t    %f\t\n", stu[result].name, stu[result].id, stu[result].CS, stu[result].math, stu[result].avg);

	sort_student(stu, SIZE);

	printf("\n排序後（依平均成績）：\n");
	printf("姓名\t學號\t計概成績\t數學成績\t平均成績\n"); \

		for (i = 0; i < SIZE; i++) {
			printf("%s\t%d\t    %d\t\t    %d\t\t    %f\t\n", stu[i].name, stu[i].id, stu[i].CS, stu[i].math, stu[i].avg);
		}


	return 0;
}