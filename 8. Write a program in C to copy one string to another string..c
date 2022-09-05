/******************************************************************************

8. Write a program in C to copy one string to another string.
*******************************************************************************/

#include <stdio.h>

int main()
{
    char a[100],b[100];
    printf("Enter the strings \n");
    fgets(a,100,stdin);
    for(int i=0;a[i];i++)
    {
        b[i]=a[i];
    }
    b[i]='\0';
    printf("Copyed string is : %s",b);
}
