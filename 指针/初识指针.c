#include<stdio.h>

// int main()
// {
//     // printf("%d\n",sizeof(char*));
//     // printf("%d\n",sizeof(short*));
//     // printf("%d\n",sizeof(int*));
//     // printf("%d\n",sizeof(double*));
//     // int a = 0x11223344;
//     // int* pa = &a;
//     // // char* pc = &a;
//     // printf("%p\n",pa);
//     // // printf("%p\n",pc);

//     return 0;
// }

// int main()
// {
//     int a = 0x11223344;
//     int* pa = &a;
//     char* pc = &a;
//     printf("%p\n",pa);
//     printf("%p\n",pa+1);

//     printf("%p\n",pc);
//     printf("%p\n",pc+1);

//     /*000000000061FE0C
//       000000000061FE10
//       000000000061FE0C
//       000000000061FE0D*/


//     return 0;
// }

// int main()
// {
//     int arr[10] = { 0 };
//     int* p = arr;//数组名-首元素的地址
//     int i =0;
//     for(i = 0;i<10;i++)
//     {

//         *(p+i) = 1;
//     }
//     for(i = 0;i<10;i++)
//     {

//         printf("%d",arr[i]);
//     }


//     return 0;
// }

// int main()
// {

// // int a;//局部变量不初始化，默认是随机值
// int *p;//局部的指针变量，就被初始化随机值
// * p = 20;

//     return 0 ;
// }

//指针访问越界，p就是野指针
// int main()
// {
//     int arr[10] = {0};
//     int *p = arr;
//     int i = 0;
//     for(i = 0;i<12;i++)
//     {

//         p++;
//     }

//     return 0;
// }

// int main()
// {
// int a[10] = {0};
// int i = 0;
// int* p = a;
// for(i = 0;i<= 12;i++)
// {
//     *p = i;
//     p++;
// }
// return 0;
// }

//如何规避野指针
// 1、指针初始化
// 2、小心指针越界
// 3、指针置空
// 4、指针使用之前检查指针的有效性

// int main()
// {
//     int a =10;
//     int*pa =&a;//初始化
//     int* p = NULL;

// }

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10 };
    int i =0;
    int sz = sizeof(arr)/sizeof(arr[0]);
    int *p =arr;
    for(i = 0;i<sz;i++)
    {
        printf("%d ",*p);
        // p = p + 1;
        p++;
    }
    return 0;
}