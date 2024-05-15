#include<stdio.h>

int main(){
int a[10];
int max=0;
printf("enter the element of array\n");
for(int i=0;i<5;i++)
{
    scanf("%d",&a[i]);
}
a[0]=max;
for(int i=0;i<5;i++)
{
    if(a[i]>max)
    max=a[i];
    // printf("%d ",a[i]);
}
printf("the highest element is %d",max);
return 0;
}