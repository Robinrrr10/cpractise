#include<stdio.h>
void main()
{
    printf("Start\n");
    int arr[5] = { 14, 1, 81, 23, 47};
    printf("Value of index 0 is %d\n", arr[0]);
    printf("Address of index 0 is %d\n", &arr[0]);
    printf("Address of index 1 is %d\n", &arr[1]);
    printf("Address of index 2 is %d\n", &arr[2]);
    printf("Address of index 3 is %d\n", &arr[3]);
    printf("Address of index 4 is %d\n", &arr[4]);
    int *p = &arr; //This will get index 0 address of the arr
    printf("Value of p is %d\n", p);
    printf("Value of address(arr index 0) which is in p is %d\n", *p);
    printf("Value of address(arr index 1) which is in p is %d\n", *(p+1));
    printf("Value of address(arr index 2) which is in p is %d\n", *(p+2));
    printf("Value of address(arr index 3) which is in p is %d\n", *(p+3));
    printf("Value of address(arr index 4) which is in p is %d\n", *(p+4));
    printf("\nEnd\n");
}
