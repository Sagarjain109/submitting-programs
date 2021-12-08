//Program to print count of negative or postive number//

#include <stdio.h>

int main()
{
    int size;
    printf("enter the size of an array: ");
    scanf("%d",&size);
    int x[size],i,count1=0,count2=0;
    //count1=negative,count2=positive//
    for(i=0;i<=size-1;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<=size-1;i++)
    {
      if(x[i]<0)
      count1+=1;
      else
      count2+=1;
    }
    printf("Total %d negative number in this array\n",count1);
    printf("Total %d positive number in this array",count2);

    return 0;
}
