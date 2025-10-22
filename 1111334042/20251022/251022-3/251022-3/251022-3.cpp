#include <stdio.h>
int main() {
	double p, r, aims, deposit; // p本金 r年利率 aims存款目標
	double amount; // 複利本利和
	int year = 0;
	int monthlyrate;

	printf("請輸入本金：");
	scanf_s("%lf", &p);
	printf("請輸入年利率：");
	scanf_s("%lf", &r);
	printf("請輸入每月定期存入金額：");
	scanf_s("%lf", &deposit);
	printf("請輸入存款目標：");
	scanf_s("%lf", &aims);

	amount = p; // 初始金額 = 本金
	monthlyrate = r / 12;


	while (amount < aims) {
		year++;
		amount += deposit;
		amount = amount * (1 + monthlyrate);
		printf("第 %d 年的結存為 %.2f\n", year, amount);
	}

	printf("\n達成目標需要 %d 年。\n", year);

	return 0;
}
