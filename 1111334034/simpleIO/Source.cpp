#include <stdio.h>

int main(void)
{
	int chinese, math, IC;

	printf("�п�J�A����妨�Z:\n");
	scanf_s("%d", &chinese);
	printf("�п�J�A���ƾǦ��Z:\n");
	scanf_s("%d", &math);
	printf("�п�J�A���p�����Z:\n");
	scanf_s("%d", &IC);

	int sum = chinese + math + IC;
	printf("�A���Ǵ��`���Z�O�O: %d\n", sum);
	double avg = (double)sum / 3;
	printf("�A���Ǵ��������Z�O: %g\n", avg);

	if (avg >= 60) {
		printf("���߳q�L!");
	}
	else {
		printf("�A�[�o!");
	}
	return 0;
}