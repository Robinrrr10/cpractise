#include<stdio.h>
void main()
{
    printf("Start\n");
    int a=2, b=4;
    printf("a:%d and b:%d\n", a, b);
    //XOR 11 -> 0 and 10 -> 1
    b = a ^ b;//10 and 100 -> 110
    a = b ^ a;//10 and 110 -> 100
    b = b ^ a;//110 and 100 -> 010
    printf("a:%d and b:%d\n", a, b);
    printf("\nEnd\n");
}
