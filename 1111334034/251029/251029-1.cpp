#include <stdio.h>

double bmi(double weight, double height);

int main(void) {
	double weight = 0;
	double height = 0;
	printf("�п�J�魫: ");
	scanf_s("%lf", &weight);
	printf("\n�п�J����(����): ");
	scanf_s("%lf", &height);

	double BMI = bmi(weight, height);

	printf("\nBMI: %g", BMI);

	if (BMI < 18.5) {
		printf("�魫�L��");
	}
	else if (BMI < 25.0) {
		printf("���`�魫");
	}
	else if (BMI < 30.0) {
		printf("�L��");
	}
	else if (BMI < 35.0) {
		printf("���תέD");
	}
	else if (BMI < 40.0) {
		printf("���תέD");
	}
	else {
		printf("���תέD(�f�A�έD)");
	}

	return 0;
}

double bmi(double weight, double height) {
	return weight / (height * height);
}