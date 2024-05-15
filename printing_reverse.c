#include <stdio.h>
void printf_array(int a[], int start, int n)
{
    if (start >= n)
        return;
    else
    {
        printf("%d\t", a[start]);
        printf_array(a, start+1, n);
    }
}
int printArr(int *a,int n){
     for (int i = 0; i < n; i++)
        printf(" %d ", a[i]);
}
int main()
{
    int n, a[10];
    printf("Enter the number of element in array ");
    scanf("%d", &n);
    printf("enter the number of elements in array ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("The elements are\n");
    printf_array(a, 0, n);
    printArr(&a,n);
    return 0;
}