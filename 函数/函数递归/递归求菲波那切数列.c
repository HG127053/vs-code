#include<stdio.h>
//斐波那契数列
    int count =0;
int Fib(int n)
{

    if(n==3) //测试第三个菲波那切数列的计算次数
    {
        count++;
    }
      
    if(n<=2)
    return 1;
    else
    return Fib(n-1)+Fib(n-2);
}
int main()
{
    int n = 0;
    int ret = 0;
    scanf("%d",&n);
    ret = Fib(n);
    printf("ret = %d\n",ret);
    printf("%d",count);
    return 0;
}