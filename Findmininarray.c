//Find minimum in array
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int a[size],i,min=0;
    printf("Enter the values: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0;i<size;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("Minimum number is %d",min);

    return 0;
}