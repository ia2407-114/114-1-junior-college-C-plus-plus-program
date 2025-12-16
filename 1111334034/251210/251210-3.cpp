#include <stdio.h>
#define SIZE 10

void bubble(int arr1[], int arr2[], int arr3[], double arr4[], int length);
int mode(int arr[], int length);

int main(void)
{
	int id[SIZE] = { 0 };
	int cs[SIZE] = { 0 };
	int math[SIZE] = { 0 };
	double avg[SIZE] = { 0 };
	for (int i = 0; i < SIZE; i++) {
		scanf_s("%d %d %d", &id[i], &cs[i], &math[i]);
		avg[i] = (cs[i] + math[i]) / 2.;
	}

	puts("排序前");
	puts("學號  計概成績 數學成績 平均分數");
	for (int i = 0; i < SIZE; i++) {
		printf("%-5d %-8d %-5d %-5lf\n", id[i], cs[i], math[i], avg[i]);
	}

	bubble(id, cs, math, avg, SIZE);
	puts("排序後");
	puts("學號  計概成績 數學成績 平均分數");
	for (int i = 0; i < SIZE; i++) {
		printf("%-5d %-8d %-8d %-5lf\n", id[i], cs[i], math[i], avg[i]);
	}

	printf("\n計概成績眾數: %d", mode(cs, SIZE));

}

void bubble(int arr1[], int arr2[], int arr3[], double arr4[], int length)
{
	int pass, i, temp;
	double temp_double;

	// loop to control number of passes                    
	for (pass = 1; pass < length; ++pass) {

		// loop to control number of comparisons per pass   
		for (i = 0; i < length - 1; ++i) {

			// compare adjacent elements and swap them if first 
			// element is greater than second element           
			if (arr4[i] > arr4[i + 1]) {
				temp = arr1[i];
				arr1[i] = arr1[i + 1];
				arr1[i + 1] = temp;

				temp = arr2[i];
				arr2[i] = arr2[i + 1];
				arr2[i + 1] = temp;

				temp = arr3[i];
				arr3[i] = arr3[i + 1];
				arr3[i + 1] = temp;

				temp_double = arr4[i];
				arr4[i] = arr4[i + 1];
				arr4[i + 1] = temp;
			}
		}
	}
}

int mode(int arr[], int length) {
	int count[101] = { 0 };
	for (int i = 0; i < length; i++) {
		count[arr[i]]++;
	}
	int max = 0;
	int result = 0;
	for (int i = 0; i < 101; i++) {
		if (max < count[i]) {
			max = count[i];
			result = i;
		}
	}
	return result;
}
