#include <stdio.h>
int main(void)
{
	double kg = 0.0;
	int cost = 0;
	printf("�п�J���q\n");
	scanf_s("%lf", & kg);
	if (kg <= 2) {
		cost = 60;
		printf("%d��\n", cost);
	}
	else {
		cost =((kg - 2) * 35) + 60;
		printf("%d��", cost);
	}
}