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
     if(s[i]>=97 && s[i]<=122)
      s[i]-=32;
  }
  printf("Strings are in uppercase : %s",s);
 

    return 0;
}
