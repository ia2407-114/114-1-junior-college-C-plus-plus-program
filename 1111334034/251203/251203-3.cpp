#include <stdio.h>
#define max 15

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
	if (n >= max) {
		printf("超出容量!!!");
		return 0;
	}

	printf("x: ");
	scanf_s("%d", &x);

	double term[max];

	double ex = 1;

	for (int i = 1; i < n; i++) {
		term[i - 1] = (double)power(x, i) / factorial(i);
		ex += term[i - 1];
	}
	printf("e^%d = %lf\n", x, ex);

	printf("計算過程: 1 + ");
	for (int i = 1; i < n; i++) {
		printf("%lf + ", term[i - 1]);
	}
}