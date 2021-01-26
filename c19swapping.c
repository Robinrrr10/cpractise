#include<stdio.h>
void main()
{
    int a=7, b=9;
    int tmp;
    printf("Start\n");
    printf("a=%d , b=%d\n", a, b);
    tmp = a;
    a = b;
    b = tmp;
    printf("a=%d , b=%d\n", a, b);
    printf("\nEnd\n");
}
