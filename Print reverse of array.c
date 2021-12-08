/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//Program to print Reverse using array//

#include <stdio.h>

int main()
{
    int size;
    printf("enter the size of an array: ");
    scanf("%d",&size);
    int x[size],i;
    for(i=0;i<=size-1;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=size-1;i>=0;i--)
    {
        printf("%d\n",x[i]);
    }

    return 0;
}
