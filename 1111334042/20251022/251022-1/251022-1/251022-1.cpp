#include <stdio.h>
int main() {
	double p,r,aims; // p���� r�~�Q�v aims�s�ڥؼ�
	double amount; // �ƧQ���Q�M
	int year=0;

	printf("�п�J�����G");
	scanf_s("%lf", &p);

	printf("�п�J�~�Q�v�G");
	scanf_s("%lf",&r);
	printf("�п�J�s�ڥؼСG");
	scanf_s("%lf",&aims);
	
	amount = p; // ��l���B = ����



	while (amount < aims) {
		year++;
		amount = amount * (1 + r);
		printf("�� %d �~�����s�� %.2f\n", year, amount);
	}

	printf("\n�F���ؼлݭn %d �~�C\n", year);

	return 0;
}
