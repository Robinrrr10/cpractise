#include<stdio.h>
void main()
{
    int arr[2][3] = {{4, 8, 2}, {11, 9,5}};
    int i, j;
    printf("Start\n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("\nEnd\n");
}
