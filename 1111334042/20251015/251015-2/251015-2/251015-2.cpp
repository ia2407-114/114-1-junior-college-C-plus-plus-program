#include <stdio.h>

int main() {
    int fact, n;
    int i, j;
    unsigned long long factorial = 1;  // �ΨӦs���h��
    double e = 1.0; // e ����l�ȬO 1

    // ��J�@�Ӿ�� fact < 13�A�íp��䶥�h
    printf("�п�J�@�Ӿ�� fact�]<13�^�G");
    scanf_s("%d", &fact);

    if (fact >= 13 || fact < 0) {
        printf("���~�G�п�J 0 �� 12 ��������ơC\n");
        return 1;
    }

    // �p�� fact �����h
    for (i = 1; i <= fact; i++) {
        factorial *= i;
    }

    printf("%d �����h���G%llu\n", fact, factorial);

    // ��J���ؼ� n < 13�A�íp�� e �������
    printf("�п�J e �����ؼƶq n�]<13�^�G");
    scanf_s("%d", &n);

    if (n >= 13 || n < 1) {
        printf("���~�G�п�J 1 �� 12 ��������ơC\n");
        return 1;
    }

    // �p�� e �������
    for (i = 1; i < n; i++) {
        unsigned long long term_fact = 1;
        for (j = 1; j <= i; j++) {
            term_fact *= j;
        }
        e += 1.0 / term_fact;
    }

    printf("�ϥ� %d ���p�⪺ e ����Ȭ��G%.10f\n", n, e);

    return 0;
}
