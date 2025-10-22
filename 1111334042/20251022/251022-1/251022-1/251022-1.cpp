#include <stdio.h>
int main() {
	double p,r,aims; // p本金 r年利率 aims存款目標
	double amount; // 複利本利和
	int year=0;

	printf("請輸入本金：");
	scanf_s("%lf", &p);

	printf("請輸入年利率：");
	scanf_s("%lf",&r);
	printf("請輸入存款目標：");
	scanf_s("%lf",&aims);
	
	amount = p; // 初始金額 = 本金



	while (amount < aims) {
		year++;
		amount = amount * (1 + r);
		printf("第 %d 年的結存為 %.2f\n", year, amount);
	}

	printf("\n達成目標需要 %d 年。\n", year);

	return 0;
}
