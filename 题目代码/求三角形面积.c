#include<stdio.h>
#include<math.h>
// 面积公式：
    // s=(a+b+c)/2;
    // area=sqrt(s*(s-a)*(s-b)*(s-c));
int main()
{
    float a,b,c;
    float s,area;
    printf("请输入三角形的三边长: ");
    scanf("%f,%f,%f",&a,&b,&c);
    if(a+b>c&&a+c>b&&b+c>a)
    {
    s=(a+b+c)/2.0;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("此三角形的面积为：%7.2f",area);
    }
    else
    printf("你输入的三角形边长有误!请重新输入");
return 0;
}