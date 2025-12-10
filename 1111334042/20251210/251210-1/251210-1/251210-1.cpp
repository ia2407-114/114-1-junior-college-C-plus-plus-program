#include <stdio.h>
#define RESPONSES_SIZE 20 
#define FREQUENCY_SIZE 11 
int main(void)
{
    
    int frequency[FREQUENCY_SIZE] = { 0 };
   
    int responses[RESPONSES_SIZE];

    int i; 

   
    printf("請輸入 %d 個問卷評分 (範圍 1-10):\n", RESPONSES_SIZE);

    for (i = 0; i < RESPONSES_SIZE; ++i) {
        printf("第 %d 份: ", i + 1);
        scanf_s("%d", &responses[i]); 
    }

    for (i = 0; i < RESPONSES_SIZE; ++i) {
        
        if (responses[i] >= 1 && responses[i] < FREQUENCY_SIZE) {
            ++frequency[responses[i]];
        }
    }

    printf("\n%s%10s%15s\n", "評分", "次數", "統計圖");

    for (int rating = 1; rating < FREQUENCY_SIZE; ++rating) {

        
        printf("%4d%10d        ", rating, frequency[rating]);

        for (int j = 1; j <= frequency[rating]; ++j) {
            printf("%c", '*');
        }

        puts(""); 
    }

    return 0;
}