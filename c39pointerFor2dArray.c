#include<stdio.h>
void main()
{
    printf("Start\n");
    int arr[2][3] = { {4, 23, 9}, {76, 21, 51}};
    printf("value of 0,0 is %d and Address of %d\n", arr[0][0], &arr[0][0]);
    printf("value of 0,1 is %d and Address of %d\n", arr[0][1], &arr[0][1]);
    printf("value of 0,2 is %d and Address of %d\n", arr[0][2], &arr[0][2]);
    printf("value of 1,0 is %d and Address of %d\n", arr[1][0], &arr[1][0]);
    printf("value of 1,1 is %d and Address of %d\n", arr[1][1], &arr[1][1]);
    printf("value of 1,2 is %d and Address of %d\n", arr[1][2], &arr[1][2]);
    printf("Address of 0,0 is %d\n", &arr[0][0]);
    printf("Address of array is %d\n", &arr); //Address of array always points index 0 address

    printf("Value of address %d\n", **arr);
    printf("Value of address 0,1 which is in p is %d\n", *(*arr+1));
    printf("Address of 1,2 (21) is %d\n", *(*(arr+1)+1));
    printf("Address of 1,2 is %d\n", *(arr+1)+1);
    printf("\nEnd\n");
}
