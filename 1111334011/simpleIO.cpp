#include <stdio.h>

int main(void)
{
    int chinese = 98, math = 100, cup = 100, toto;
    double avg = 0;
    char rank = 'A';

    printf("�п�J�A����妨�Z:\n");
    scanf_s("%d", &chinese);
    printf("�п�J�A���ƾǦ��Z:\n");
    scanf_s("%d", &math);
    printf("�п�J�A���p�����Z:\n");
    scanf_s("%d", &cup);
    toto = chinese + math + cup;
    printf("�A�Ǵ����`���Z�O:%d\n", toto);
    avg = (double)toto / 3.0;
    printf("�A���Ǵ��������Z�O:%f\n", avg);

    if (avg >= 60) {
        printf("���߳q�L�I\n");
    }
    else {
        printf("�A�[�o�I\n");
    }
    return 0;
}
