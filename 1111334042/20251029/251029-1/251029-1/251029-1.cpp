#include <stdio.h>

// �ŧi�禡�쫬
double calculateBMI(double weight, double height);

int main()
{
    double weight = 0.0, height = 0.0, bmi = 0.0;

    printf("�п�J�魫�]����^�G\n");
    scanf_s("%lf", &weight);
    printf("�п�J�����]���ء^�G\n");
    scanf_s("%lf", &height);

    //�I�s�Ƶ{���p��
    bmi = calculateBMI(weight, height);

    //��X BMI ���G
    printf("�z�� BMI ���G%.2f\n", bmi);

    //�P�_ BMI
    if (bmi < 18.5)
        printf("BMI ���šG�L��\n");
    else if (bmi < 24.9)
        printf("BMI ���šG���`\n");
    else if (bmi < 29.9)
        printf("BMI ���šG�L��\n");
    else if (bmi < 34.9)
        printf("BMI ���šG���תέD\n");
    else if (bmi < 39.9)
        printf("BMI ���šG���תέD\n");
    else
        printf("BMI ���šG���תέD\n");

    return 0;
}

//�w�q�Ƶ{���p�� BMI
double calculateBMI(double weight, double height) {
    double bmiValue;
    bmiValue = weight / (height * height);
    return bmiValue; //�Ǧ^�p�⵲�G
}
