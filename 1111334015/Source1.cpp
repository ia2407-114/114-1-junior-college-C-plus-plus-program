#include <stdio.h>

int main(void)
{
	int chinese = 0, english = 0, ics = 0;
		int total = 0;
	double avg = 0;

	printf("�п�J�A����妨�Z:\n");
	scanf("%d", &chinese);
	printf("�п�J�A����妨�Z:\n");
	scanf("%d", &english);
	printf("�п�J�A���p�����Z:\n");
	scanf("%d", &ics);

	total = chinese + english + ics;
	avg = total / 3.0;
	printf("�A���`���Z�O: %d\n",total);
	printf("�A���������Z�O: %.2f\n", avg);

	if (avg >= 60)
		printf("���߳q�L!\n");
	else
		printf("�A�[�o!\m");

		return 0;


}