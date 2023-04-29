#include<stdio.h>
#define row 9
int main()
{
    int i ,j ;
    for(i = 1;i<=row;i++)
    {
        for(j = 1;j<=i;j++)
        {
            printf("%dx%d=%-3d",j,i,i*j);
        }
        printf("\n");
    }

    return 0;
}