#include <stdio.h>
int main() {
	double p, r, yl, aims;
	int year = 0;
	double mt = 0;
	printf("��J����:\n");
	scanf_s("%lf", &p);
	printf("��J�~�Q�v:\n");
	scanf_s("%lf", &r);
	printf("��J�멳�w���s�J���B:\n");
	scanf_s("%lf", &yl);
	printf("��J�s�ڥؼ�\n");
	scanf_s("%lf", &aims);
	mt = r / 12;
	while (p < aims)
	{
		year++;
		for (int i = 0; i < 12; i++) {
			p += yl;
			p = p + (p * mt);
		}
		printf("��%d�~���Q�X��%lf\n", year, p);
	}
	printf("�@�ݭn%d�~�~��F��ؼ�\n", year);
}