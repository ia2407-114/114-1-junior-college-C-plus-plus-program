#include <stdio.h>
int main(void)
{
	int chinese, english ,�p��;

	printf("�A����妨�Z�O:");
scanf_s("%d", &chinese);
	
	printf("�A���^�妨�Z�O:");
scanf_s("%d", &english);
	
	printf("�A���p�����Z�O:");
	scanf_s("%d", &�p��);
	printf("�A���`���Z�O:%d\n", chinese+english+ �p��);
	const double avg = (float)(chinese + english + �p��) / 3;
	printf("�A���������Z�O:%f\n", avg);
	if (avg >= 60)
	{
		printf("�ܴγ�");

	}else
	{printf("�Цb�[�o");

	}
	return 0;

}
