#include<stdio.h>

//编写一个程序，将2小时25分钟转换成用分钟表示，输出转化前、后的数值
int main()
{
    int hour = 2;
    int mins = 25;
    int all_mins;
    all_mins = hour *60 + mins;
    printf("%d小时%d分钟是%d分钟",hour,mins,all_mins);

    return 0;
}