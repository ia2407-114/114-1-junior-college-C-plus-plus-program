#include <stdio.h>
int main() {
	double p, r, aims, deposit; // p���� r�~�Q�v aims�s�ڥؼ�
	double amount; // �ƧQ���Q�M
	int year = 0;
	int monthlyrate;

	printf("�п�J�����G");
	scanf_s("%lf", &p);
	printf("�п�J�~�Q�v�G");
	scanf_s("%lf", &r);
	printf("�п�J�C��w���s�J���B�G");
	scanf_s("%lf", &deposit);
	printf("�п�J�s�ڥؼСG");
	scanf_s("%lf", &aims);

	amount = p; // ��l���B = ����
	monthlyrate = r / 12;


	while (amount < aims) {
		year++;
		amount += deposit;
		amount = amount * (1 + monthlyrate);
		printf("�� %d �~�����s�� %.2f\n", year, amount);
	}

	printf("\n�F���ؼлݭn %d �~�C\n", year);

	return 0;
}
