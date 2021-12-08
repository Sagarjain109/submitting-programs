//Program to print count of even and odd number//

#include <stdio.h>

int main()
{
    int size;
    printf("enter the size of an array: ");
    scanf("%d",&size);
    int x[size],i,count1=0,count2=0;
    //count1=even,count2=odd//
    for(i=0;i<=size-1;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<=size-1;i++)
    {
      if(x[i]%2==0)
      count1+=1;
      else
      count2+=1;
    }
    printf("Total %d even number in this array\n",count1);
    printf("Total %d odd number in this array",count2);

    return 0;
}
