#include <stdio.h>
int main(void)
{
	// �Ĥ@�D�G��T��
	int first = 0, second = 0, third = 0,sum=0;
	int max, min;
	double avg = 0.0;

	
	printf("�п�J�Ĥ@�ӼơG\n");
	scanf_s("%d", &first);
	printf("�п�J�ĤG�ӼơG\n");
	scanf_s("%d", &second);
	printf("�п�J�ĤT�ӼơG\n");
	scanf_s("%d", &third);

	max = first;
	min = first;

	sum = first+second+third;
	
	avg = sum / 3.0;
	
	if (second > max)
		max = second;
	if (third > max)
		max = third;

	if (second < min)
		min = second;
	if (third < min)
		min = third;

	printf("�`�M���G%d\n", sum);
	printf("�����Ȭ��G%f\n", avg);
	printf("�̤j�ȬO�G%d\n", max);
	printf("�̤p�ȬO�G%d\n", min);
	return 0;
}