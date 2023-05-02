#include<stdio.h>

int main()
{
    int x,y,z;
    for(x = 0;x <=8;x++)
    for(y = 0;y<=11;y++)
        for(z=0;z<=36;z=z+2)
            if((4*x+3*y+z/2==36)&&(x+y+z==36))
            {
                printf("men:%d\n",x);
                printf("women:%d\n",y);
                printf("children:%d\n",z);
            }
    

    return 0;
}