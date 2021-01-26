#include<stdio.h>
void main()
{
    printf("Start\n");
    int i = 2;
    switch(i){
    case 1:
        printf("One");
        break;
    case 2:
        printf("Two");
        break;
    case 3:
        printf("Three");
        break;
    default:
        printf("number other than 1, 2 and 3");
    }
    printf("\nEnd\n");
}
