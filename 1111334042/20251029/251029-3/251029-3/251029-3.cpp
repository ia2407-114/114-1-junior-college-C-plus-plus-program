#include <stdio.h>

// �Ƶ{���ŧi�G�ǤJ�����B�Q�v�B�C�~�s�ڡB�ؼЪ��B�A�^�ǩһݦ~��
int calculateYears(int p, double r, int deposit, int aims);

int main(void) {
    int p, deposit, aims;
    double r;
    int years;

    printf("�п�J�����G");
    scanf_s("%d", &p);

    printf("�п�J�~�Q�v�]�Ҧp��J 0.05 �N�� 5%%�^�G");
    scanf_s("%lf", &r);

    printf("�п�J�C�~�w���s�J���B�G");
    scanf_s("%d", &deposit);

    printf("�п�J�s�ڥؼСG");
    scanf_s("%d", &aims);

    // �I�s�Ƶ{���p��ݭn�X�~
    years = calculateYears(p, r, deposit, aims);

    printf("\n�F���ؼлݭn %d �~�C\n", years);

    return 0;
}

// �Ƶ{���w�q
int calculateYears(int p, double r, int deposit, int aims) {
    double amount = p; // ��l���B
    int year = 0;

    while (amount < aims) {
        year++;
        amount += deposit;     // �C�~�s�J�T�w���B
        amount = amount * (1 + r); // �[�W�~�Q�v
        printf("�� %d �~�����s�� %.2f\n", year, amount);
    }

    return year; // �^�ǹF���ؼЩһݪ��~��
}
