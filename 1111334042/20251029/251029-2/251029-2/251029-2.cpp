#include <stdio.h>

// �Ƶ{���ŧi�]�ǤJ��� fact�A�^�� double�^
double factorial(int fact);

int main(void) {
    int fact, n;
    int i, j;
    double e = 1.0;  //e����l�ȬO1
    double fact_value; //�s�񶥭����G

    //��J�@�Ӿ��fact<13�A�íp��䶥��
    printf("�п�J�@�Ӿ�� fact�]<13�^�G");
    scanf_s("%d", &fact);

    if (fact >= 13 || fact < 0) {
        printf("���~�G�п�J 0 �� 12 ��������ơC\n");
        return 1;
    }

    //�I�s�Ƶ{���p�ⶥ��
    fact_value = factorial(fact);

    printf("%d ���������G%.0f\n", fact, fact_value);

    //��J���� n<13�A�íp��e�������
    printf("�п�J e �����ؼƶq n�]<13�^�G");
    scanf_s("%d", &n);

    if (n >= 13 || n < 1) {
        printf("���~�G�п�J 1 �� 12 ��������ơC\n");
        return 1;
    }

    //�ϥΰƵ{���p��e�������
    for (i = 1; i < n; i++) {
        e += 1.0 / factorial(i); //�����I�s�Ƶ{��
    }

    printf("�ϥ� %d ���p�⪺ e ����Ȭ��G%.10f\n", n, e);

    return 0;
}

//�Ƶ{���w�q�G�p�� fact �������æ^�� double
double factorial(int fact) {
    double result = 1.0;
    int i;

    for (i = 1; i <= fact; i++) {
        result *= i;
    }

    return result; //�^�ǭp�⵲�G
}
