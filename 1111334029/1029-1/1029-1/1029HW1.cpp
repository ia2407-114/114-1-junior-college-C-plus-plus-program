#include<stdio.h>

double FBMI(double high, double wei);

int main(void)
{
	double high = 0.0;
	double	kg = 0.0;
	double BMI = 0.0;
	printf("�п�J����(����):\n");
	scanf_s("%lf", &high);
	printf("�п�J�魫(����):\n");
	scanf_s("%lf", &kg);
	BMI = FBMI(high, kg);
	printf("BMI�Ȭ�:%f\n", BMI);
	if (BMI < 18.5)
		printf("�魫�L��\n");
	else if (BMI <= 24.9)
		printf("�魫���`\n");
	else if (BMI <= 29.9)
		printf("�L��\n");
	else if (BMI <= 34.9)
		printf("���תέD\n");
	else if (BMI <= 39.9)
		printf("���תέD\n");
	else
		printf("���תέD\n");
	
	return(0);
}

double FBMI(double high, double wei)
{
	double RBMI;
	RBMI = wei / (high * high);
	return RBMI;
}