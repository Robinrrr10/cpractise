#include<stdio.h>
void main()
{
    printf("Start\n");
    int a = 1;
    printf("a %d\n",a);
    a++;
    printf("a %d\n",a);
    printf("a %d\n",a);
    int b = 1;
    printf("b %d\n",b);
    ++b;
    printf("b %d\n",b);
    printf("b %d\n",b);
    int c = 1;
    printf("c %d\n",c++);
    printf("c %d\n",c);
    printf("c %d\n",c);
    int d = 1;
    printf("d %d\n",++d);
    printf("d %d\n",d);
    printf("d %d\n",d);
    printf("End\n");
}
