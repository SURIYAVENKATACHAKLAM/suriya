#include <stdio.h>
#include<conio.h>
int main(void) {
int a[100],n,i,j,minimumimumimum;
printf("\n enter the no. of values");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(a[j]<a[i])
minimumimumimum=a[j];
}
}
printf("\n the minimumimumimum value is %d ", minimumimumimum);
return 0;
}
return0;
}
