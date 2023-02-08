/******************************************************************************

6. Write a program to reverse a string.

*******************************************************************************/

#include <stdio.h>

int main()
{
  char s[100],tem;
  int n;
  
  printf("Enter the string \n");
  fgets(s,100,stdin);//taking inputs from users
  
  for( n=0;s[n];n++);//length of string is stored in n variable.
  
  
  for(int j=0;j<n/2;j++)
  {
     tem=s[j];
     s[j]=s[n-j-1];
     s[n-j-1]=tem;
     
  }
  printf("Strings are in reverse order : %s",s);
 

    return 0;
}

