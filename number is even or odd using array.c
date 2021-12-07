//To determine which number is even or not? 
#include <stdio.h>
int main()
{
   int size;
   printf("enter the size of array: ");
   scanf("%d",&size);
   int x[size],i,even,odd;
   for(i=0;i<=size-1;i++)
   {
       scanf("%d",&x[i]);
    }
   for(i=0;i<=size-1;i++)
   {
       if (x[i]%2==0)
       printf("%d even\n",x[i]);
       else
       printf("%d odd\n",x[i]);
   }
   return 0;

}
