#include<stdio.h>
void main()
{
    printf("Start\n");
    int a=2, b=4;
    printf("a:%d and b:%d\n", a, b);
    b = a + b;
    a = b - a;
    b = b - a;
    printf("a:%d and b:%d\n", a, b);
    printf("\nEnd\n");
}
