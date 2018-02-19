#include <stdio.h>

void main()
{ 
    int i,a,c;
    printf("enter the number");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        c++;
    
    }
    if(c!=2)
    {
    printf("it is composite");
    }
    else
    {
        printf("not composite");
        }
        }
        
