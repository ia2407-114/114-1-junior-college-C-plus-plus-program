#include <stdio.h>
int main() {
	double p, r, aims;
	int year=0;
	printf("輸入本金:\n");
	scanf_s("%lf", &p);
	printf("輸入年利率:\n");
	scanf_s("%lf", &r);
	printf("輸入存款目標\n");
	scanf_s("%lf", &aims);
	while (p < aims)
	{
		year++;
		p = p + (p * r);
		printf("第%d年本利合為%lf\n", year, p);
	}
	printf("共需要%d年才能達到目標\n", year);
}