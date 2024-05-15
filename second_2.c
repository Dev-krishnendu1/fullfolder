#include<stdio.h>

int main(){
    int min=0,max=0;
int a[5]={6,8,3,12,54};
max=a[0];
min=a[0];
for(int i=0;i<5;i++)
{
  if(a[i]>max)
  max=a[i];
  if(a[i]<min)
  min=a[i];
}
printf("The highest element is %d lowest element is %d",max,min);
return 0;
}