#include<stdio.h>
#include<math.h>

int main()
{
    int i,j,k,n,p1,p2;
    while(1)
    {
        printf("Please enter a even number:");
        scanf("%d",&n);
        if(n>6&&n/2==0)break;
    }
    for(i=3;i<=n/2;i+=2)
    {
        p1=1;
        for(k=2;k<sqrt(i);k++)
        if(i%k==0)
        {
        p1=0;break;
        }
        if(p1==1)
        {
            p2=1;
            j=n-i;
            for(k=2;k<=sqrt(j);k++)
                if(j%k==0)
                {
                    p2=0;break;
                }
            if(p2==1)
            {
            printf("%d=%d+%d\n",n,i,j);
            break;
            }
        }
        if(p1==1&&p2==1)break;

    }
    

return 0;
}