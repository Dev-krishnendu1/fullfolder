#include <stdio.h>

int main()
{
    int a[100][100], b[100][100], c[100][100];
    int m, n;
    printf("enter the first matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the second matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("the first matrix is \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d " , a[i][j]);
        }
        printf("\n");
    }
    printf("the second matrix is \n");
     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            int sum = 0;
            for (int k = 0; k < 3; k++)
            {
                sum += a[i][k] * b[k][j];
                c[i][j] = sum;
            }
        }
    }
    printf("Multiplication of two matrices are\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}