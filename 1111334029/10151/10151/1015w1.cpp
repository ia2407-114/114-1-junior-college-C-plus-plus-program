#include <stdio.h>
int main(void)
{
	double kg = 0.0;
	int cost = 0;
	printf("請輸入重量\n");
	scanf_s("%lf", & kg);
	if (kg <= 2) {
		cost = 60;
		printf("%d元\n", cost);
	}
	else {
		cost =((kg - 2) * 35) + 60;
		printf("%d元", cost);
	}
}
