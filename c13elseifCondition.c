#include<stdio.h>
void main()
{
    printf("Start\n");
    int a=3, b=8, c=5;
    if(a>b && a>c){
        printf("a is greater");
    }
    else if(b>c){
        printf("b is greater");
    }
    else{
        printf("c is greater");
    }
    printf("\nEnd\n");
}
