/******************************************************************************

4. Write a program to convert a given string into uppercase

*******************************************************************************/

#include <stdio.h>

int main()
{
  char s[100];
  
  printf("Enter the string \n");
  fgets(s,100,stdin);
  
  for(int i=0;s[i];i++)
  {
     if(s[i]>=65 && s[i]<=90)
      s[i]+=32;
  }
  printf("Strings are in lower : %s",s);
 

    return 0;
}
