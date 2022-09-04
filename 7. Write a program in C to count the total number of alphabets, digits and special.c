/******************************************************************************

7. Write a program in C to count the total number of alphabets, digits and special
characters in a string.

*******************************************************************************/

#include <stdio.h>

int main()
{
  char s[100];
  int alpha=0,digit=0,special_char=0;
  
  printf("Enter the string \n");
  fgets(s,100,stdin);//taking inputs from users
  
 for(int i=0;s[i];i++)
 {
     if((s[i]>=65 && s[i]<=90) || (s[i]>=90 && s[i]<=122))
     alpha++;
     else if(s[i]>=48 && s[i]<=57)
     digit++;
     else
     special_char++;
 }
 printf("Total number of alphabets  in this given strings is  : %d \n",alpha);
 printf("Total number of digits  in this given strings is  : %d \n",digit);
 printf("Total number of special characters  in this given strings is  : %d \n",alpha);

    return 0;
}

