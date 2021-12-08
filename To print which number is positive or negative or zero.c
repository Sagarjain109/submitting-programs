/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//Program to print which is negative or positive or zero//

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
    for(i=0;i<=size-1;i++)
    {
        if(x[i]<0)
        printf("%d negative\n",x[i]);
        else if (x[i]>0)
        printf("%d positive\n",x[i]);
        else
        printf("%d is zero\n",x[i]);
        
    }

    return 0;
}
