#include<stdio.h>
//输入一个正整数，逆序输出，如输入123输出为321
int main()
{
    int a,b;
    scanf("%d",&a);
    do
    {
        b=a%10;         //提取输入数字的个位
        printf("%d",b); //输出从左往右
    } while ((a/=10)!=0);//当输入的数字最后取余为0时，停止循环
    printf("\n");


    return 0;
}