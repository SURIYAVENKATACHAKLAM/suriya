#include <stdio.h>
#include<conio.h>
int main(void)
{ 
float max=0, a;
float min=0, b;
printf("Entering 0 will terminate the sequence of input values");
do
{
printf("Enter Number:");
if (scanf(" %f", &a)==1);
{
if(a<max)
{

        a=max;
        }

    if(a>min)
    {

        a=min;
        }

    }

}
while(a!=0);

printf(" largest number %.3f.  smallest number  %.3f.", max, min);
}

