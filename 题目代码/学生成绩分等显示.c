#include<stdio.h>

int main()
{
    int a,b;
    float ave;
    printf("Input your enlish and math grade:");
    scanf("%d,%d",&a,&b);
    ave = (a+b)/2.0;
    if(a>=0&&a<=100&&b>=0&&b<=100)
    {
    if(ave>=90&&ave<=100)
        printf("excellence!");
    else if(ave>=80&&ave<=90)
        printf("all right");
    else if(ave>=70&&ave<=80)
        printf("middling");
    else if(ave>=60&&ave<=70)
        printf("pass");
    else
        printf("fail");
    }
    else
        printf("input is error");
    return 0;
}