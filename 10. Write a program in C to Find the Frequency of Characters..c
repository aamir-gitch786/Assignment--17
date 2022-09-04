/******************************************************************************
10. Write a program in C to Find the Frequency of Characters.
*******************************************************************************/

#include <stdio.h>

int main()
{
    char a[100],tem;
    int b[100],c,k;
    printf("Enter the strings \n");
    fgets(a,100,stdin);
    for( k=0;a[k];k++);// length of string is stored in variable k.
    for(int i=0;a[i];i++)
    {
       c=1;
       for(int j=0;a[j];j++)
       {
           if(i!=j)
           {
               if(a[i]==a[j])
               { c++;
                a[j]='*';
               }
           }
       }
       b[i]=c;
    }
    printf("Frequency of each Characters :\n");
    for(int i=0;i<k-1;i++)// for avoiding null Characters i used k-1.
    {
        if(a[i]!='*')
        printf("Frequency of %c is %d \n",a[i],b[i]);
    }
}
