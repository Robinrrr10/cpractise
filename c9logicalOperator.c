#include<stdio.h>
void main(){
    printf("Start\n");
    int a = 10;
    int b = 12;
    int result = a > 5 && b  <20;
    printf("1 result: %d\n", result);
    a = 3;
    result = a > 5 && b < 20;
    printf("2 result: %d\n", result);
    result = a > 5 || b <20;
    printf("3 result: %d\n", result);
    printf("\nEnd\n");
}
