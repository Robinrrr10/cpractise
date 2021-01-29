#include<stdio.h>
void myOwnFunc(); //Function should be defined before main
void main()
{
    printf("Start\n");
    myOwnFunc();
    printf("\nEnd\n");
}

void myOwnFunc()
{
    printf("I am in function da");
}
