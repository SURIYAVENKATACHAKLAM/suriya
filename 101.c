#include<stdio.h>
#include<string.h>
int main()
{
int n,i,l,a;
char ch[10];
printf("Enter a Word ");
scanf("%s",&ch);
printf("Enter a number  ");
scanf("%d",&n);
l=strlen(ch);
a=l-n;
for(i=a;i<l;i++)
{
printf("%c",ch[i]);
}
return 0;
}
/*ammu*/
