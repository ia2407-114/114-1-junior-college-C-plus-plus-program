#include <stdio.h>

int main(void)
{
	int chinese, math, IC;
	printf("�п�J�A����妨�Z:");
	scanf_s("%d", &chinese);
	printf("�п�J�A���ƾǦ��Z:");
	scanf_s("%d", &math);
	printf("�п�J�A���p�����Z:");
	scanf_s("%d", &IC);
	printf("�A���Ǵ��`���Z�O:%d\n", (chinese + math + IC)   );
	double avg = (double)(chinese + math + IC) / 3;
	printf("�Ǵ��������Z: % f \n", avg);

	if (avg >= 60) {
		printf("���߳q�L");
	}
	else {
		printf("�A�[�o");
	}
	return 0;

}
