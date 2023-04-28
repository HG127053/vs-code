#include<stdio.h>

int main()
{
    int temp_C;
    int temp_F;
    printf("请输入一个摄氏温度:");
    scanf("%d",&temp_C);
    temp_F = 9*temp_C/5 +32;
    printf("\n摄氏温度%d度,转化为华氏温度为%d度",temp_C,temp_F);

    return 0;
}