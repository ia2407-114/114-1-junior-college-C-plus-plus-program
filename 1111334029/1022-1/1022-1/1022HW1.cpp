#include <stdio.h>
int main() {
	double p, r, aims;
	int year=0;
	printf("��J����:\n");
	scanf_s("%lf", &p);
	printf("��J�~�Q�v:\n");
	scanf_s("%lf", &r);
	printf("��J�s�ڥؼ�\n");
	scanf_s("%lf", &aims);
	while (p < aims)
	{
		year++;
		p = p + (p * r);
		printf("��%d�~���Q�X��%lf\n", year, p);
	}
	printf("�@�ݭn%d�~�~��F��ؼ�\n", year);
}