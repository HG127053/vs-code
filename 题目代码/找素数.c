#include<stdio.h>
#include<math.h>

//一个自然数，除了1和它本身外不能被其他整数整除，则该数为素数。
//事实证明，一个数不能被从2到根号k之间的所有整数除尽，则k必定是素数
//下面是找出100-200之间的素数的例子
int main()
{
    int i,k,sk,flag;
    int count = 0;
    for(k=100;k<=200;k++)
    {
        flag=1;     //设置素数标志，如果flag为1，则k为素数
        sk=sqrt(k);
        for(i=2;i<=sk;i++)  //k不能被2到根号k之间的所有整数除尽，则k必定是素数
            if(k%i==0)      //判断是否整除
            {
            flag=0;         //k不是素数，置flag为0
            break;
            }
        if(flag==1)         //flag为1时，k是素数
        {   count++;
            if(count%12==1)    //每行显示12个数据
            printf("\n");
            printf("%d ",k);
        }
    }
    printf("\n");
    printf("素数个数为：%d",count);

    return 0;
}