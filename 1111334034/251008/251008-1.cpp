#include <stdio.h>

int main(void) {
	int a, b, c;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);

	printf("�M: %d\n������: %g\n", a + b + c
		, double(a + b + c) / 3.);
	int max = a;
	int min = a;
	if (b > max) max = b;
	if (b < min) min = b;

	if (c > max) max = c;
	if (c < min) min = c;

	printf("�̤j: %d\n�̤p: %d\n", max, min);

	return 0;
}