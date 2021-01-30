#include<stdio.h>
void main()
{
    printf("Start\n");
    int i = 5;
    printf("Value of i is %d\n", i);
    printf("Address of i is %d\n", &i);
    int *p;
    p = &i; //giving i address to p value
    printf("Value of p is %d\n", p);
    printf("Value of address(i) which is in p value is %d\n", *p);
    printf("Address of p is %d\n", &p);
    printf("\nEnd\n");
}
