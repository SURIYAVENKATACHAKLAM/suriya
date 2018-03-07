#include<stdio.h>
void main()
{
int a,sum;
printf("enter the number: ");
scanf("%d",&a);
while(a!=0)
{
a=a/10;
++sum;
}
printf("%d" ,sum);
}
