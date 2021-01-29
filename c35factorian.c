#include<stdio.h>
int fact(int);
void main()
{
    int n = 5;
    printf("Start\n");
    int res = fact(n);
    printf("Factorial of %d is %d:", n, res);
    printf("\nEnd\n");
}
int fact(int num)
{
    int i;
    int f=1;
    for(i=1;i<=num;i++)
    {
        f = f * i;
    }
    return f;
}
