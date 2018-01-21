#include<stdio.h>
int main()
{

       char s1[5],s2[5];
       int i,temp = 0;

       printf("Enter the string1 value: ");
       gets(s1);

       printf(" Enter the String2 value: ");
       gets(s2);

       for(i=0; s1[i]!='\0'; i++)
       {
      if(s[i] == s2[i])
      temp = 1;
       else
       temp = 0;
       }
       if(temp == 1)
       printf("Both strings are same.");
       else
       printf("Both string not same.");
       return 0;
       }
