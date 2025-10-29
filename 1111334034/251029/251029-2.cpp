#include <stdio.h>

int factorial(int n);

int main(void) {
	int fact;
	printf("fact: ");
	scanf_s("%d", &fact);

	printf("\nfact的階乘值為: %d", factorial(fact));

	int n;
	printf("\n計算e所用的項目數量n: ");
	scanf_s("%d", &n);

	double e = 1;
	for (int i = 1; i <= n; i++) {
		e += 1. / factorial(i);
	}
	printf("\n計算出的近似e為: %g", e);
	
	return 0;
}

int factorial(int n) {
	int x = 1;
	for (int i = 1; i <= n; i++) x *= i;
	return x;
}