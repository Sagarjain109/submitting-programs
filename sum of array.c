//Program to print sum of array//

#include <stdio.h>

int main()
{
    int size;
    printf("enter the size of an array: ");
    scanf("%d",&size);
    int x[size],i,sum=0;
    for(i=0;i<=size-1;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<=size-1;i++)
    {
        sum+=x[i];
    }
    printf("sum is %d",sum);

    return 0;
}
