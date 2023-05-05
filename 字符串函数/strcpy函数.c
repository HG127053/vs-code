#include<stdio.h>
#include<string.h>
int main()
{
char c1[20]="programs";
char c2[10]="example";
strcpy(c1,c2);
printf("String c1:");
puts(c1);
printf("String c2:");
puts(c2);

return 0;
}