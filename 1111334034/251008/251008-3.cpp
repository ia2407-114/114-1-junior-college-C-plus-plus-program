#include <stdio.h>

int main(void) {
	int a, b, c, d;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	scanf_s("%d", &d);
	int temp;

	if (c < d) {
		temp = d;
		d = c;
		c = temp;
	}

	if (b < c) {
		temp = c;
		c = b;
		b = temp;
	}

	if (a < b) {
		temp = b;
		b = a;
		a = temp;
	}

	if (d > c) {
		temp = d;
		d = c;
		c = temp;
	}

	if (b < c) {
		temp = c;
		c = b;
		b = temp;
	}

	if (c < d) {
		temp = d;
		d = c;
		c = temp;
	}

	printf("\n%d %d %d %d", a, b, c, d);
}