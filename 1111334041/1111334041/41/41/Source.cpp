#include <stdio.h>

int main(void)
{
	int Chinese = 0, math = 0, score = 0, calculator = 9;
	printf("�п�J�A����妨�Z�G");
	scanf_s("%d", &Chinese);

	printf("�п�J�A���ƾǦ��Z�G");
	scanf_s("%d", &math);

	printf("�п�J�A���p�����Z�G");
	scanf_s("%d", &calculator);
	score = Chinese + math + calculator;

	printf("�A���Ǵ����Z%d+%d+%d�O�G%d\n", Chinese, math, calculator, score);
	float average = (Chinese + math + calculator) / 3;
	printf("�A���Ǵ������O�G%f\n", average);
	if (average >= 60)
		printf("���߳q�L");
	else
	{
		printf("�A�[�o");
	}
	return 0;
}