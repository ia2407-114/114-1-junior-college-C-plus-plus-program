#include <iostream>

int main()
{
	int chinese , math, score ;
	
	char rank = 'A';
	printf("�A����妨�Z�O:");
    scanf_s("%d", &chinese);
	
	printf("�A���ƾǦ��Z�O:");
	scanf_s("%d", &math);
	
	printf("�A���p�����Z�O:");
    scanf_s("%d", &score);
    float avg = ((float)chinese + math+score) / 3;
	printf("�A���Ǵ��`���Z�O:%d+%d+%d=%d\n", score , chinese , math, score+chinese+math);
	printf("�A���Ǵ��������Z�O:%.3f\n",  avg);
	printf("�A���ŶZ�O:%c"  , rank);
	return 0;


}