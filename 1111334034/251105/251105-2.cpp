#include <stdio.h>

int calculate(double p, double r, double n, double aims);

int main(void) {
	double p, r, n, aims;
	printf("本金: ");
	scanf_s("%lf", &p);

	printf("利率: ");
	scanf_s("%lf", &r);

	printf("定期存款: ");
	scanf_s("%lf", &n);

	printf("目標金額: ");
	scanf_s("%lf", &aims);

	printf("要存%d年才能達成目標", calculate(p, r, n, aims));

	return 0;
}

int calculate(double p, double r, double n, double aims) {
	int i = 1;
	while (p < aims) {
		p += n;
		p += p * r;
		printf("第%d年，本利合: %g\n", i, p);
		i++;
	}
	return i;
}