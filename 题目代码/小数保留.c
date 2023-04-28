#include<stdio.h>

//将一个float类型的数保留到小数点后两位，并将第三位四舍五入
int main()
{
float a = 1.114;
a = (a*100+0.5)/100.0;
printf("%.2f",a);

    return 0;
}