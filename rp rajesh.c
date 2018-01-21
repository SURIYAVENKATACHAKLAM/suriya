#include<stdio.h>
void main()
{
int min,hour,min;
printf("enter the  min");
scanf("%d",&min);
hour=min/60;
min=min%60;
printf("HOUR\t\tMIN\n");
printf("%d\t\t%d",hour,min);
return 0;
}
