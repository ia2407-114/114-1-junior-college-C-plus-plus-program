#include <stdio.h>

int factorial(int n) {
	if (n == 1) {
		return n;
	}
	return n * factorial(n - 1);
}


int main(void) {
	int count;
	scanf_s("%d", &count);

	double e = 1;

	for (int i = 1; i < count; i++) {
		e += 1. / factorial(i);
	}
	printf("e = %lf", e);
}