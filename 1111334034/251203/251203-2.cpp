#include <stdio.h>

int factorial(int n) {
	if (n == 1) {
		return n;
	}
	return n * factorial(n - 1);
}

int power(int x, int y) {
	if (y == 1) {
		return x;
	}
	return x * power(x, y - 1);
}


int main(void) {
	int n, x;
	printf("n: ");
	scanf_s("%d", &n);
	printf("x: ");
	scanf_s("%d", &x);

	double ex = 1;

	for (int i = 1; i < n; i++) {
		ex += (double) power(x,i) / factorial(i);
	}
	printf("e^%d = %lf", x, ex);
}