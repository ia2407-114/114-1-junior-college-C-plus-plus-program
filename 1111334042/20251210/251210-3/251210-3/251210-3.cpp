#include <stdio.h>
#define SIZE 10

void bubbleSort(int ids[], int cs_scores[], int math_scores[], float avg_scores[], int size);
int findMode(int scores[], int size);


int main(void)
{

    int ids[SIZE];          
    int cs_scores[SIZE];    
    int math_scores[SIZE];  
    float avg_scores[SIZE]; 

    int i; 

    
    printf("--- 1. 資料輸入 (10 位學生) ---\n");
    for (i = 0; i < SIZE; i++) {
        printf("第 %d 位學生:\n", i + 1);
        printf("  輸入學號: ");
        scanf_s("%d", &ids[i]);
        printf("  輸入計概成績: ");
        scanf_s("%d", &cs_scores[i]);
        printf("  輸入數學成績: ");
        scanf_s("%d", &math_scores[i]);

        
        avg_scores[i] = (float)(cs_scores[i] + math_scores[i]) / 2.0;
        printf("  平均成績計算完成: %.2f\n", avg_scores[i]);
    }

    
    printf("\n--- 2. 排序前結果 ---\n");
    printf("%8s%10s%10s%10s\n", "學號", "計概", "數學", "平均");
    printf("-----------------------------------------\n");
    for (i = 0; i < SIZE; i++) {
        printf("%8d%10d%10d%10.2f\n", ids[i], cs_scores[i], math_scores[i], avg_scores[i]);
    }

    
    bubbleSort(ids, cs_scores, math_scores, avg_scores, SIZE);

    
    printf("\n--- 3. 排序後結果 (依平均成績由小到大) ---\n");
    printf("%8s%10s%10s%10s\n", "學號", "計概", "數學", "平均");
    printf("-----------------------------------------\n");
    for (i = 0; i < SIZE; i++) {
        printf("%8d%10d%10d%10.2f\n", ids[i], cs_scores[i], math_scores[i], avg_scores[i]);
    }

    
    int cs_mode = findMode(cs_scores, SIZE);
    int math_mode = findMode(math_scores, SIZE);

    printf("\n--- 4. 眾數計算結果 ---\n");
    printf("計概成績的眾數 (Mode): %d\n", cs_mode);
    printf("數學成績的眾數 (Mode): %d\n", math_mode);

    return 0;
}


void bubbleSort(int ids[], int cs_scores[], int math_scores[], float avg_scores[], int size)
{
    int i, j;

    
    float temp_avg;
    int temp_id, temp_cs, temp_math;

    
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - 1 - i; j++) {

            
            if (avg_scores[j] > avg_scores[j + 1]) {

                
                temp_avg = avg_scores[j];
                avg_scores[j] = avg_scores[j + 1];
                avg_scores[j + 1] = temp_avg;

                
                temp_id = ids[j];
                ids[j] = ids[j + 1];
                ids[j + 1] = temp_id;

                
                temp_cs = cs_scores[j];
                cs_scores[j] = cs_scores[j + 1];
                cs_scores[j + 1] = temp_cs;

               
                temp_math = math_scores[j];
                math_scores[j] = math_scores[j + 1];
                math_scores[j + 1] = temp_math;
            }
        }
    }
}


int findMode(int scores[], int size)
{

    int frequency[101] = { 0 };
    int i;


    for (i = 0; i < size; i++) {
  
        if (scores[i] >= 0 && scores[i] <= 100) {
            frequency[scores[i]]++; 
        }
    }

    
    int mode = -1;
    int max_frequency = 0; 

    
    for (i = 0; i <= 100; i++) {
       
        if (frequency[i] > max_frequency) {
            max_frequency = frequency[i]; 
            mode = i; 
        }
    }

    
    return mode;
}