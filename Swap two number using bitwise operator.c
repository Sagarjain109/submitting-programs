//C program to Swap two number using bitwise operator

#include<stdio.h>
int main()
{
   int x,y;
   printf("Enter fisrt value: ");
   scanf("%d",&x);
   printf("Enter second Number: ");
   scanf("%d",&y);
   x=x^y;
   y=x^y;
   x=x^y;
   printf("First Number = %d\n Second number = %d",x,y);
    return 0 ;
}
