#include<stdio.h>
void main()
{
    printf("Start\n");
    int a = 12; //1100
    int x = a << 2; //adding two more zeros after 1100 => 110000 = 48
    printf("left shift result:%d\n", x);
    int y = a >> 2; // removing last two number in 1100 => 11 = 3
    printf("Right shift result:%d\n", y);
    printf("\nEnd\n");
}
