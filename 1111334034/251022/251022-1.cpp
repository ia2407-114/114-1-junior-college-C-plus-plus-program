#include <stdio.h>

int main(void) {
	double p, r, aims;

	printf("����: ");
	scanf_s("%lf", &p);
	
	printf("�Q�v: ");
	scanf_s("%lf", &r);
	
	printf("�ؼЪ��B: ");
	scanf_s("%lf", &aims);

	int i = 1;
	while (p < aims) {
		p += (double)p * r;
		printf("��%d�~�A���Q�X: %g\n", i, p);
		i++;
	}
	return 0;
}