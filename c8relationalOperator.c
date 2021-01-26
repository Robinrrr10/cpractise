#include<stdio.h>
void main()
{
    printf("Start\n");
    int a = 10;
    int b = 7;
    int result = a < b;
    printf("1 result %d \n", result);
    a = 5;
    result = a < b;
    printf("2 result %d \n", result);
    a = 7;
    result = a <= b;
    printf("3 result %d \n", result);
    result = a == b;
    printf("4 result %d \n", result);
    result = a != b;
    printf("5 result %d \n", result);
    printf("\nEnd\n");
}
