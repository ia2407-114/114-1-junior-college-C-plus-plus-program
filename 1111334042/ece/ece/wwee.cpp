#include <stdio.h>
int main(void)
{
	int chn = 0, eng = 0, pcs = 0,sum=0;
	double avg = 0.0;
	printf("�п�J��妨�Z�G\n");
	scanf_s("%d", &chn);
	printf("�п�J�^�妨�Z�G\n");
	scanf_s("%d", &eng);
	printf("�п�J�p�����Z�G\n");
	scanf_s("%d", &pcs);
	sum = chn + eng + pcs;
	printf("�`���Z���G%d\n", sum);
	avg = sum / 3.0;
	printf("�������Z���G%f\n", avg);
	if (avg >= 60.0)
		printf("���߳q�L�I\n");
	else
		printf("�A�[�o�I");
	return 0;
}