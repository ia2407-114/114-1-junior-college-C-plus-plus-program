#include <stdio.h>

void sort(char names[10][20], int arr[3][10], double avg[10]) {
	int pass, i, temp;
	double tempAvg;
	char tempChar;
	int length = 10;

	// loop to control number of passes
	for (pass = 1; pass < length; ++pass) {

		// loop to control number of comparisons per pass
		for (i = 0; i < length - 1; ++i) {

			// compare adjacent elements and swap them if first 
			// element is greater than second element       
			if (avg[i] > avg[i + 1]) {

				tempAvg = avg[i];
				avg[i] = avg[i + 1];
				avg[i + 1] = tempAvg;

				for (int k = 0; k < 20; k++) {
					tempChar = names[i][k];
					names[i][k] = names[i + 1][k];
					names[i + 1][k] = tempChar;
				}

				temp = arr[0][i];
				arr[0][i] = arr[0][i + 1];
				arr[0][i + 1] = temp;

				temp = arr[1][i];
				arr[1][i] = arr[1][i + 1];
				arr[1][i + 1] = temp;

				temp = arr[2][i];
				arr[2][i] = arr[2][i + 1];
				arr[2][i + 1] = temp;
			}
		}
	}
}

int main(void) {
	char names[10][20];
	int student[3][10];
	double avg[10];

	printf("請依序輸入 10 位學生的 姓名、學號、計概、數學:\n");

	for (int i = 0; i < 10; i++) {
		scanf_s("%s", names[i], 20);

		for (int j = 0; j < 3; j++) {
			scanf_s("%d", &student[j][i]);
		}

		avg[i] = (student[1][i] + student[2][i]) / 2.0;
	}

	sort(names, student, avg);

	printf("\n--- 排序結果 (依平均高->低) ---\n");
	puts("姓名\tID\t計概\t數學\t平均");

	for (int i = 0; i < 10; i++) {
		printf("%-8s %-4d\t%-4d\t%-4d\t%-4.2lf\n",
			names[i],
			student[0][i],
			student[1][i],
			student[2][i],
			avg[i]);
	}

	return 0;
}