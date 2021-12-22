#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of an array: ");
    scanf("%d",&size);
    int x[size],i,min=0,max=0;
    for(i=0;i<size;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<size;i++)
    {
        if(x[i]>max)
        {
            max=x[i];
        }
    }
    printf("%d is maximum",max);
    return 0 ;
}