//copy elements from one array to another array
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int x[size],y[size],i;
    printf("Enter the values: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<size;i++)
    {
        y[i]=x[i];
    }
    for(i=0;i<size;i++)
    {
        printf("%d,",y[i]);
    }
    return 0;
}