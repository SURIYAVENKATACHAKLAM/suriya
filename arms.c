#include <stdio.h>
void main()
{
int number, num = 0, rem = 0, cube = 0, temp;
printf ("enter a number");
scanf("%d", &number);
temp = number;
while (number != 0)
{
rem = number % 10;
cube = pow(rem, 3);
sum = sum + cube;
number = number / 10;
}
if (sum == temp)
printf ("The given no is armstrong no");
else
printf ("The given no is not a armstrong no");
return 0;
}
