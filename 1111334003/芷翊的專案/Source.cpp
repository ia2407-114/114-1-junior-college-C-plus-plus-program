#include <stdio.h>

int main(void)
{
   int chinese , english ,c ;
   float avg = 0;
   printf("�п�J�A����妨�Z:\n");
   scanf_s("%d", &chinese);
   printf("�п�J�A���^�妨�Z:\n");
   scanf_s("%d", &english);
   printf("�п�J�A���p�����Z:\n");
   scanf_s("%d", &c);
   printf("�Ǵ��`���Z:%d+%d+%d\n",chinese,english,c );
   avg =(float)(chinese + english+c) / 3;
   printf("�Ǵ��������Z:%f\n",avg);

if (avg>=60)
{
   printf("���߳q�L!\n");
}
else
{
   printf("�A�[�o!:\n");
}

return 0;
}



