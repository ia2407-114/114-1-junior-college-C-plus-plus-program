#include <stdio.h>

double approximate_pi(int n) {
	int i;
	double pi_approx = 0.0;
	double sign = 1.0;

	for (i = 0; i < n; i++) {
		double denominator = 2.0 * i + 1.0;
		pi_approx += sign * (4.0 / denominator);
		sign *= -1.0;
	}

	return pi_approx;
}

double circleCircumference(double r, double pi) {
	return 2 * pi * r;
}

double circleArea(double r, double pi) {
	return pi * r * r;
}

double sphereVolume(double r, double pi) {
	return 4. / 3. * pi * r * r * r;
}

double sphereSurface(double r, double pi) {
	return 4. * pi * r * r;
}

double cylinderVolume(double r, double h, double pi) {
	return pi * r * r * h;
}

double cylinderSurface(double r, double h, double pi) {
	return (2. * pi * r * h) + (2 * pi * r * r);
}

int main(void) {
	double n, r, h;
	printf("計算PI所使用的項數n為: ");
	scanf_s("%lf", &n);
	printf("計算圓相關的半徑r為: ");
	scanf_s("%lf", &r);
	printf("計算圓相關的高度h為: ");
	scanf_s("%lf", &h);

	double pi = approximate_pi(n);

	printf("PI: %lf\n", pi);
	printf("圓周長: %lf\n", circleCircumference(r, pi));
	printf("圓周長: %lf\n", circleArea(r, pi));
	printf("圓面積: %lf\n", sphereVolume(r, pi));
	printf("球體積: %lf\n", sphereVolume(r, pi));
	printf("球表面積: %lf\n", sphereSurface(r, pi));
	printf("圓柱體積: %lf\n", cylinderVolume(r, h, pi));
	printf("圓柱表面積: %lf\n", cylinderSurface(r, h, pi));


	return 0;
}