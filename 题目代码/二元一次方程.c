#include<stdio.h>
#include<math.h>

//求解二元一次方程组
int main()
{
    int a,b,c;
    float x1,x2,d;
    printf("Input:a,b,c: ");
    scanf("%d,%d,%d",&a,&b,&c);
    d = b*b - 4*a*c;
    if(d>0)
    {
    x1= (-b +sqrt(d))/(2*a);
    x2= (-b -sqrt(d))/(2*a);
    printf("x1 is %f,x2 is %f\n",x1,x2);
    }
    else printf("x is not real root!\n");
    return 0;
}