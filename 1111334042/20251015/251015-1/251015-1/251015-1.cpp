#include <stdio.h>

int main()
{
    double weight;
    int cost;

    printf("�п�J�]�q���q�]����^�G");
    scanf_s("%lf", &weight);

    if (weight <= 2.0) {
        cost = 60;
    }
    else {
        double extra = weight - 2.0;
        int extraKg = (int)extra; // ������Ƴ���

        // �p�G���p�ơA�N�h�[ 1 ����
        if (extra > extraKg) {
            extraKg += 1;
        }

        cost = 60 + extraKg * 35;
    }

    printf("���B�B�O���G%d ��\n", cost);

    return 0;
}
