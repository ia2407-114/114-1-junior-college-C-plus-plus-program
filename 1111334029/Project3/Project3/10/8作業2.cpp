#include<stdio.h>

int main(void)
{
	float high = 0.0;
	float kg = 0.0;
	float BMI = 0.0;
	printf("�п�J����(����):\n");
	scanf_s("%f", &high);
	printf("�п�J�魫(����):\n");
	scanf_s("%f", &kg);
	BMI = (kg / (high * high));
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
	
}