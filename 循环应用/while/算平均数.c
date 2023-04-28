//算平均数
#include<stdio.h>

int main()
{
    int number;
    int sum = 0;
    int count = 0;
    printf("请输入数字（空格或回车为间隔）并以输入-1为结束: ");
    scanf("%d",&number);
    while(number != -1){
        sum += number;
        count ++;
        scanf("%d",&number);
    }

    printf("平均数为：%f\n",1.0*sum/count);

    return 0;
}