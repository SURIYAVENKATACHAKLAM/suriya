#include<stdio.h>
void main()
{
int n=4,i;
for(i=2;i<=10;i++)
{
if(i%4==0)
{
if(n <pow(2,i))
{
printf("the number is %d",i);
}
}
getch();
}
