#include <stdio.h>

int main(void)
{
	int ���� = 0, �^�� = 0,�p��=0;
	float avg;
	printf("�п�J�A����妨�Z:");
	scanf_s("%d", &����);
	printf("�п�J�A���^�妨�Z:");
	scanf_s("%d", &�^��);
	printf("�п�J�A���p�����Z:");
	scanf_s("%d", &�p��);
	printf("�A���Ǵ����Z%d+%d+%d�O:%d\n", ����, �^��,�p��, ���� + �^�� + �p��);
	avg = (float)(���� + �^�� + �p��) / 3;
	printf("�Ǵ��������Z:%f\n", avg);
	if (avg >= 60)
		printf("���߳q�L!");
	else
		printf("�A�[�o!");
	return 0;

}

