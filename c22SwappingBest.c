#include<stdio.h>
void main()
{
    printf("Start\n");
    int a = 2, b = 5;
    printf("a:%d , b:%d\n", a, b);
    b = a + b - ( a = b ); //2 + 5 - (a=5) //2 + 5 - 5 = 2
    printf("a:%d , b:%d\n", a, b);
    printf("\nEnd\n");
}
