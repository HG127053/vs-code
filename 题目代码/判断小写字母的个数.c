#include<stdio.h>

int main()
{
    int count;
    char ch;
    printf("Input a string: ");
    while((ch = getchar())!='\n')
    {
        if(ch>='a'&&ch<='z')
            count++;
    }
    printf("%d",count);
    return 0;
}