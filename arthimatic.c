#include<stdio.h>
void main()
{
int a,b=0,a1;
scanf("%d",&a);
while(a!=0)
{
a1=a%10;
b+=a1;
a/=10;
}
printf("%d",b);
}
