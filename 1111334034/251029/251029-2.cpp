#include <stdio.h>

int factorial(int n);

int main(void) {
	int fact;
	printf("fact: ");
	scanf_s("%d", &fact);

	printf("\nfact�������Ȭ�: %d", factorial(fact));

	int n;
	printf("\n�p��e�ҥΪ����ؼƶqn: ");
	scanf_s("%d", &n);

	double e = 1;
	for (int i = 1; i <= n; i++) {
		e += 1. / factorial(i);
	}
	printf("\n�p��X�����e��: %g", e);
	
	return 0;
}

int factorial(int n) {
	int x = 1;
	for (int i = 1; i <= n; i++) x *= i;
	return x;
}