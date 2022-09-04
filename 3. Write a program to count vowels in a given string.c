/******************************************************************************

3. Write a program to count vowels in a given string

*******************************************************************************/

#include <stdio.h>

int main()
{
  char s[100];
  int count=0;
  printf("Enter the string \n");
  fgets(s,100,stdin);
  
  for(int i=0;s[i];i++)
  {
      if('a'==s[i] || 65 ==s[i] || 'e'==s[i] || 'E'==s[i] ||'i'==s[i] || 'I' ==s[i] || 'o'==s[i] || 'O'==s[i] ||'u'==s[i]||'U'==s[i])
      count++;
  }
  printf("Total number of vowels present in this given string is : %d",count);

    return 0;
}
