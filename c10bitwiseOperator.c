#include<stdio.h>
void main()
{
    printf("Start\n");
    int a = 2;             //2 = 0010
    int b = 6;             //6 = 0110
    int bitOrResult = a | b;  // 0110 = 6
    printf("1. result:%d\n", bitOrResult);
    //2 = 0010
    //6 = 0110
       // 0010 = 2
    int bitAndResult = a & b;
    printf("2. result:%d\n", bitAndResult);
    printf("\nEnd\n");
}
