#include <stdio.h>

int main(void)
{
	int n1 = 0, n2 = 0, n3 = 0;
	int all = 0;
	double sa = 0;
	printf("�п�J�Ĥ@�Ӿ��:\n");
	scanf_s("%d", &n1);
	printf("�п�J�ĤG�Ӿ��:\n");
	scanf_s("%d", &n2);
	printf("�п�J�ĤT�Ӿ��\n");
	scanf_s("%d", &n3);
	all = (n1 + n2 + n3);
	printf("�Ʀr�`�M��:%d\n", all);
	sa = (double)(n1 + n2 + n3) / 3;
	printf("�����Ȭ�:%f\n", sa);
}