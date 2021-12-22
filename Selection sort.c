#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of an array: ");
    scanf("%d",&size);
    int x[size],i,j,temp;
    printf("Enter the elements: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(x[i]>x[j])
            {
                temp=x[i];
                x[i]=x[j];
                x[j]=temp;
            }
        }
    }
    for(i=0;i<size;i++)
    {
        printf("%d,",x[i]);
    }
    return 0;
}