#include <stdio.h>

int main(void) {
	double p, r, n, aims;
	printf("����: ");
	scanf_s("%lf", &p);

	printf("�Q�v: ");
	scanf_s("%lf", &r);

	printf("�w���s��: ");
	scanf_s("%lf", &n);

	printf("�ؼЪ��B: ");
	scanf_s("%lf", &aims);

	int i = 1;
	while (p < aims) {
		p += n;
		p += p * r;
		printf("��%d�~�A���Q�X: %g\n", i, p);
		i++;
	}
	return 0;
}