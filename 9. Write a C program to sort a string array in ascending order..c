/******************************************************************************
9. Write a C program to sort a string array in ascending order.
*******************************************************************************/

#include <stdio.h>

int main()
{
    char a[100],tem;
    printf("Enter the strings \n");
    fgets(a,100,stdin);
    for(int i=0;a[i];i++)
    {
        for(int j=i+1;a[j];j++)
        {
            if(a[i]>a[j])
            {
                tem=a[i];
                a[i]=a[j];
                a[j]=tem;
            }
        }
    }
    printf("Sorted string in ascending order :");
    for(int i=0;a[i];i++)
    {
        printf("%c ",a[i]);
    }
}
