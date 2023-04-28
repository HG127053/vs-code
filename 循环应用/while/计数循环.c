//计数循环
#include<stdio.h>

int main()
{
    int count = 100;
    while(count >= 0){
        printf("%d\n",count);
        count --;
    }
    printf("发射！\n");
    return 0;
}
//该循环执行了101次
//最后输出了0
//结束循环后，count的值为-1