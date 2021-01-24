#include<stdio.h>
void main(){
    printf("Start\n");
    printf("Enter two numbers:\n");
    int a, b;
    int addResult, subResult, mulResult, divResult, modResult;
    scanf("%d %d", &a, &b);
    printf("a is %d. b is %d\n", a, b);
    addResult = a + b;
    subResult = a - b;
    mulResult = a * b;
    divResult = a / b;
    modResult = a % b;
    printf("Addition:%d\n", addResult);
    printf("Substraction:%d\n", subResult);
    printf("Multiplication:%d\n", mulResult);
    printf("Division:%d\n", divResult);
    printf("Remainder:%d\n", modResult);
    printf("\nEnd\n");
}
