#include<stdio.h>
#include<string.h>
int main()
{
char c1[20]="China";
char c2[10]="man";
strcat(c1,c2);
printf("String c1:");
puts(c1);
printf("String c2:");
puts(c2);

return 0;
}