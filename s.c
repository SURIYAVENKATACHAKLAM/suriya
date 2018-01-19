#include <stdio.h>
void main()
{
    char a;
    printf("enter the character ");
    scanf("%c",&a);
    if( a>='a' && a<='z' || a>='A' && a<='z')
    printf("it is a alphabet number");
    else
    printf(" it is not a alphabet");
}
