#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of an array: ");
    scanf("%d",&size);
    int x[size],i,c,a;
    printf("Enter the elements: ");
    for(i=0;i<size-1;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("Enter the new element: ");
    scanf("%d",&a);
    for(c=size-2;a<x[c];c--)
    {
        x[c+1]=x[c];
    }
    x[c+1]=a;
    for(i=0;i<size;i++)
    {
        printf("%d,",x[i]);
    }
    return 0;
}