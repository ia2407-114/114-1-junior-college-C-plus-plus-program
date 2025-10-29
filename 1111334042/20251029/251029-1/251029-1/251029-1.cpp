#include <stdio.h>

// 宣告函式原型
double calculateBMI(double weight, double height);

int main()
{
    double weight = 0.0, height = 0.0, bmi = 0.0;

    printf("請輸入體重（公斤）：\n");
    scanf_s("%lf", &weight);
    printf("請輸入身高（公尺）：\n");
    scanf_s("%lf", &height);

    //呼叫副程式計算
    bmi = calculateBMI(weight, height);

    //輸出 BMI 結果
    printf("您的 BMI 為：%.2f\n", bmi);

    //判斷 BMI
    if (bmi < 18.5)
        printf("BMI 等級：過輕\n");
    else if (bmi < 24.9)
        printf("BMI 等級：正常\n");
    else if (bmi < 29.9)
        printf("BMI 等級：過重\n");
    else if (bmi < 34.9)
        printf("BMI 等級：輕度肥胖\n");
    else if (bmi < 39.9)
        printf("BMI 等級：中度肥胖\n");
    else
        printf("BMI 等級：重度肥胖\n");

    return 0;
}

//定義副程式計算 BMI
double calculateBMI(double weight, double height) {
    double bmiValue;
    bmiValue = weight / (height * height);
    return bmiValue; //傳回計算結果
}
