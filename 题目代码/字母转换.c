#include<stdio.h>

//输入一个字母，输出一个它的对应大(小)写字母
int main()
{
    char ch;
    printf("请输入一个字母:");
    ch = getchar();
    if(ch>='a'&& ch<='z')
    {
        printf("转换后的字母为:%C",ch-32);
    }
    else if(ch>='A'&& ch<='Z')
    {
        printf("转换后的字母为:%C",ch+32);
    }
    else 
    printf("您输入的字母有误！");

    return 0;
}