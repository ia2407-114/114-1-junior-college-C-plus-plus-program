#include <stdio.h>

void switch_int(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
void switch_double(double* a, double* b) {
	double temp = *a;
	*a = *b;
	*b = temp;
}

int main(void) {
	int a = 1;
	int b = 2;
	double c = 2.71;
	double d = 3.14;
	printf("交換前: a=%d , b=%d | c=%lf , d=%lf\n", a, b, c, d);
	
	switch_int(&a, &b);
	switch_double(&c, &d);

	printf("交換後: a=%d , b=%d | c=%lf , d=%lf", a, b, c, d);
}
