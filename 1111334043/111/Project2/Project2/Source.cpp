#include<stdio.h>

int main()
{

	int	chinese, english, cs;
	int total;
	double average;
	char rank = 'A';
	printf("�п�J��妨�Z:");
	scanf_s("%d", &chinese);
	printf("�п�J�^�妨�Z:");
	scanf_s("%d", &english);
	printf("�п�J�p�����Z:");
	scanf_s("%d", &cs);

	total = chinese + english + cs;
	average = total / 3.0;
	printf("�`���Z= %d\n", total);
	printf("�������Z= %.2f\n", average);
	if (average >= 60)
		printf("���߳q�L\n");
	else
		printf("�A�[�o\n");

	
	printf("�A���ŶZ�O: %c", rank);
	
	return 0;
}


	







