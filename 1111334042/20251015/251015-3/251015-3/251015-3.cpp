#include <stdio.h>

int main() {
    int n;
    double pi = 0.0;
    int i;
    int sign = 1;

    printf("�п�J�һݪ����ؼƶq n�G");
    scanf_s("%d", &n);

    if (n <= 0) {
        printf("�п�J�j�� 0 ����ơC\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        // �p�G�O���ơA�~��U�@���A�o�̥ܽd continue
        if (i % 2 == 0) {
            // �p�⥿��
            pi += 4.0 / (2 * i + 1);
            continue;  // ���L�᭱�Ÿ�����
        }

        // �p�G�O�_�ơA�p��t��
        pi -= 4.0 / (2 * i + 1);
    }

    printf("�ϥ� %d ���p�⪺ pi ����Ȭ��G%.10f\n", n, pi);

    return 0;
}
