#include<stdio.h>

//鸡兔同笼问题，数头有36个，脚有96只，问鸡兔各几何？
//利用数学二元一次方程组求解
//利用x，y的唯一解求出结果
int main()
{
    int a1,a2,b1,b2,c1,c2;
    int x,y;
    printf("a1,b1,c1:");
    scanf("%d,%d,%d",&a1,&b1,&c1);
    printf("a2,b2,c2:");
    scanf("%d,%d,%d",&a2,&b2,&c2);
    x=(c1*b2-c2*b1)/(a1*b2-b1*a2);
    y=(a1*c2-c1*a2)/(a1*b2-a2*b1);
    printf("鸡有%d只,兔子有%d只",x,y);


    return 0;
}