#include<stdio.h>
void myOwnFunc() //if the function is defined before main then defining the function is optional
{
    printf("Hi this function da");
}

void main()
{
    printf("Start\n");
    myOwnFunc();
    printf("\nEnd\n");
}
