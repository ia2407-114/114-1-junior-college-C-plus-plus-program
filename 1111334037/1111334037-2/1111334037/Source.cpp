#include <stdio.h>

int main()
{
	int a, b, c , d , t;
	printf("�п�J�Ĥ@�Ӿ��:\n");
	scanf_s("%d", &a);
	printf("�п�J�ĤG�Ӿ��:\n");
	scanf_s("%d",  &b);
	printf("�п�J�ĤT�Ӿ��:\n");
	scanf_s("%d", &c);
	printf("�п�J�ĥ|�Ӿ��:\n");
	scanf_s("%d", &d);
	if (a < b) { t = a;a = b;b = t; };
	if (a < c) { t = a;a = c;c = t; };
	if (a < d) { t = a;a = d;d = t; };
	if (b < c) { t = b;b = c;c = t; };
	if (b < d) { t = b;b= d;d = t; };
	if (c< d) { t = c;c = d;d = t; };
	printf("�Ʀr�Ѥj��p: %d %d %d %d \n",a, b,c, d);
	return 0;
}