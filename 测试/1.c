#include<stdio.h>
#include<string.h>
void fun(char* s)
{
char a[10];
strcpy(a,"STRING");
s = a;
printf("%s\n",a);
printf("%s\n",s);
}

int main()
{
    char* p ="PROGRAM";
    fun(p);
    printf("%s\n",p);

    return 0;
}