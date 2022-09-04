/******************************************************************************

1. Write a program to calculate the length of the string. (without using built-in method)

*******************************************************************************/

#include <stdio.h>

int main()
{
  char s[100];
  int i;
  printf("Enter the string \n");
  fgets(s,100,stdin);
  for(i=0;s[i];i++);
  printf("length of stirng is %d",i);

    return 0;
}
