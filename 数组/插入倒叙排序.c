#include<stdio.h>

int main()
{
int a[]={4,0,2,3,1,},i,j,t;
for(i=1;i<5;i++)
{
    t=a[i];j=i-1;
    while(j>=0&&t>a[j])
    {
        a[j+1]=a[j];j--;
    }
    a[j+1]=t;
}
for(int co =0;co<5;co++)
printf("%d\n",a[co]);

}

