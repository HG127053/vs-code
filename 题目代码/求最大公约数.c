#include<stdio.h>

int main()
{
int a,b,t;
printf("Input a,b: ");
scanf("%d,%d",&a,&b);
if(a<b)
{
    t = a; a = b; b =t; //将大的整数放在a中，小的整数放在b中
}

while((t = a/b)!=0)  //余数不为0，继续相除，知道余数为0为止
{
a= b; b =t;
}
   
printf("Result: %d\n",b);
return 0;
}