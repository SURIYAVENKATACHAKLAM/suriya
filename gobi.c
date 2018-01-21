#include<stdio.h>
int main()
{
int count=0,a;
printf("enter the number");
scanf("%d",&a);
while(a!=0)
{
a=a/10;
count++;
printf(" count the number%d",count);
return 0;
}
getch();
}
