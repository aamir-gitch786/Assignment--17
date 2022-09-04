/******************************************************************************

2. Write a program to count the occurrence of a given character in a given string.

*******************************************************************************/

#include <stdio.h>

int main()
{
  char s[100],a;
  int i,count=0;
  printf("Enter the string \n");
  fgets(s,100,stdin);
  printf("Enter the character \n");
  scanf("%c",&a);
  for(i=0;s[i];i++)
  {
      if(a==s[i])
      count++;
  }
  printf("length of stirng is %d",count);

    return 0;
}
