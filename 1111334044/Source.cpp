#include <stdio.h>

int main(void)
{
    int chinese = 0, english = 0, cs = 0; // ���B�^��B�p��
    int total = 0;                        // ����`��
    double avg = 0;                       // �������� (double)

    // ��J�T�즨�Z
    printf("�п�J��妨�Z:\n");
    scanf_s("%d", &chinese);

    printf("�п�J�^�妨�Z:\n");
    scanf_s("%d", &english);

    printf("�п�J�p�����Z:\n");
    scanf_s("%d", &cs);

    // �p���`���P����
    total = chinese + english + cs;
    avg = total / 3.0;   // ���H 3.0 �קK��ư��k

    // ��X���G
    printf("�T���`�� %d+%d+%d = %d\n", chinese, english, cs, total);
    printf("�T�쥭�����Z: %f\n", avg); // �O�d�p���I 
    if (avg >= 60)
    { printf("���߳q�L\n"); }
    else
    { printf("�A�[�o\n");}
    return 0;
}