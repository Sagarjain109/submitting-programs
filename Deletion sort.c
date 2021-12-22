#include<stdio.h>
int main()
{
    int size,pos;
    printf("Enter the size of an array: ");
    scanf("%d",&size);
    int x[size],i,c;
    printf("Enter the elements: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("Enter the position which you want to delete: ");
    scanf("%d",&pos);
    for(c=pos-1;c<size-1;c++)
    {
        x[c]=x[c+1];
    }
    for(i=0;i<size-1;i++)
    {
        printf("%d,",x[i]);
    }
    return 0;
}