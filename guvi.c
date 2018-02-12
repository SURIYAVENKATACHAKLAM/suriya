#include<stdio.h>
void main()
{
	char a[10];
	int n,i;
	scanf("%s",a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i]=='0'||a[i]=='1'||a[i]=='2'||a[i]=='3'||a[i]=='4'||a[i]=='5')
		printf("%c",a[i]);
	}

