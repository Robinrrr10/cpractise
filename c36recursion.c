#include<stdio.h>
int fact(int);
void main()
{
    printf("Start\n");
    int n = 5;
    int res = fact(n);
    printf("Factorial of %d is %d", n, res);
    printf("\nEnd\n");
}
int fact(int n)
{
    int i;
    if(n != 1)
        return n * fact(n-1); //function is calling itself
    return 1;
}
