#include<stdio.h>
#include<string.h>
void main()
{
char a[10],b[20]="lappal";
scanf("%d,&b");
strcmp(a,b);
if(strcmp(a,b)==0)
{
printf("it is palindrome");
}
else
{
printf("it is not a palidrome");
}
getch();
}



