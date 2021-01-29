#include<stdio.h>
int add(int, int);
void main()
{
    printf("Start\n");
    int result = add(3, 5);
    printf("result is %d\n", result);
    int result2 = add(6, 4);
    printf("result 2 is %d\n", result2);
    printf("\nEnd\n");
}

int add(int i, int j)
{
    int k = i + j;
    return k;
}
