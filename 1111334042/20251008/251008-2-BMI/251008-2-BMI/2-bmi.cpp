#include <stdio.h>

int main(void) {
    double weight = 0.0, height = 0.0, bmi = 0.0;

    printf("�п�J�魫�]����^�G\n");
    scanf_s("%lf", &weight);
    printf("�п�J�����]���ء^�G\n");
    scanf_s("%lf", &height);

    
    bmi = weight / (height * height);

    
    printf("�z��BMI���G%.2f\n", bmi);

    
    if (bmi < 18.5)
        printf("BMI ���šG�L��\n");
    else if (bmi < 24.9)
        printf("BMI ���šG���`\n");
    else if (bmi < 29.9)
        printf("BMI ���šG�L��\n");
    else if (bmi < 30.0)
        printf("BMI ���šG���תέD\n");
    else if (bmi < 39.9)
        printf("BMI ���šG���תέD\n");
    else
        printf("BMI ���šG���תέD\n");

    return 0;
}
