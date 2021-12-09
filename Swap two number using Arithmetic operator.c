//C program to Swap two number using Arithmetic operator

#include<stdio.h>
int main()
{
   int x,y;
   printf("Enter fisrt value: ");
   scanf("%d",&x);
   printf("Enter second Number: ");
   scanf("%d",&y);
   x=x+y;
   y=x-y;
   x=x-y;
   printf("First Number = %d\nSecond number = %d",x,y);
    return 0 ;
}
