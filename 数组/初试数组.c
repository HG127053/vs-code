#include<stdio.h>
//初试数组
int main()
{
    int x;
    double sum = 0;
    int cnt = 0;
    int number[100];   //定义数组
    scanf("%d",&x);
    while(x!=-1){
        number[cnt] = x;   //对数组中的元素赋值
        sum+= x;
        cnt ++;
        scanf("%d",&x);
    }
    if( cnt > 0)
    {
        printf("%f\n",sum/cnt);
        int i;
        for(i=0;i<cnt;i++){
            if(number[i]>sum/cnt){           //使用数组中的元素
                printf("%d\n",number[i]);    //遍历数组
            }
        }
    }
    return 0;
}