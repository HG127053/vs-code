#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    float a,p;
    float profit;
    printf("请输入本金、存款年限和年利率:");
    scanf("%f,%d,%f",&a,&n,&p);
    profit = a*exp(n*log(1+p))-a;
    printf("\n到期利息为:%7.2f",profit);
    return 0;
}