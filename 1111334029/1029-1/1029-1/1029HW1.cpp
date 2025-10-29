#include<stdio.h>

double FBMI(double high, double wei);

int main(void)
{
	double high = 0.0;
	double	kg = 0.0;
	double BMI = 0.0;
	printf("請輸入身高(公尺):\n");
	scanf_s("%lf", &high);
	printf("請輸入體重(公斤):\n");
	scanf_s("%lf", &kg);
	BMI = FBMI(high, kg);
	printf("BMI值為:%f\n", BMI);
	if (BMI < 18.5)
		printf("體重過輕\n");
	else if (BMI <= 24.9)
		printf("體重正常\n");
	else if (BMI <= 29.9)
		printf("過重\n");
	else if (BMI <= 34.9)
		printf("輕度肥胖\n");
	else if (BMI <= 39.9)
		printf("中度肥胖\n");
	else
		printf("重度肥胖\n");
	
	return(0);
}

double FBMI(double high, double wei)
{
	double RBMI;
	RBMI = wei / (high * high);
	return RBMI;
}