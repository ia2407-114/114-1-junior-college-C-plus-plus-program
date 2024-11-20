//題目1. 建立一個4X5的二維陣列，分別存放學號ID、與對應的計概成績score1、數學成績score1, 請建立一個副程式avg_score()，將score陣列以及陣列長度傳給avg_score()，由它計算每個同學的平均成績後，將結果放入二微陣列中，傳回總平均(浮點數)，並由主程式印出。
 #include<stdio.h>
float avg_score(int arr[4][5], int len);
int main()
{
	int n[4][5] = { 0 };
	float avg = 0;
	for (int i = 0; i < 5; i++)
	{
		printf("\n輸入學生%d學號:", i + 1);
		scanf_s("%d", &n[0][i]);
		printf("\n輸入學生%d的計概成績:", i + 1);
		scanf_s("%d", &n[1][i]);
		printf("\n輸入學生%d的數學成績:", i + 1);
		scanf_s("%d", &n[2][i]);
	}
	printf("\n");
	avg = avg_score(n, 5);
	printf("%s%8s%8s%8s\n", "學號", "計概", "數學", "平均");
	printf("\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%d%8d%8d%8d\n", n[0][i], n[1][i], n[2][i], n[3][i]);

	}
	printf("\n全班平均為:%f", avg);
}
float avg_score(int arr[4][5], int len)
{
	float average = 0;
	int i;
	for (i = 0; i < len; i++)
	{

		arr[3][i] = (arr[1][i] + arr[2][i]) / 2;
		average += arr[3][i];



	}
	return average / len;

}