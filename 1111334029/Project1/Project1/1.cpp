#include <stdio.h>

int main(void)
{
	int ch = 0, en = 0, mt = 0;
	int all = 0;
	double sa = 0;
	printf("�п�J��妨�Z:\n");
	scanf_s("%d", &ch);
	printf("�п�J�^�妨�Z:\n");
	scanf_s("%d", &en);
	printf("�п�J�p�����Z:\n");
	scanf_s("%d", &mt);
	all = (ch + en + mt);
	printf("�`���Z��:%d\n", all);
	sa = (double)(ch + en + mt) / 3;
	printf("�������Z��:%f\n", sa);
	
	if (sa >= 60) 
		printf("���߳q�L!"); 
	else 
		printf("�A�[�o");

		return 0;
}