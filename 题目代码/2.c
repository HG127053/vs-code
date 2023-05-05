#include<stdio.h>

int main()
{  int m,n;
for(m=1,n=1;m<=100;m++)
{
    if(n>=20)
    break;
    if(n%3)
    {
        n+=3;
        continue;
    }
    n=-5;
} 
printf("%d",m);
   
return 0;
}