//C program to swap two number using third variable

#include<stdio.h>
int main()
{
   int x,y,z;
   printf("Enter fisrt value: ");
   scanf("%d",&x);
   printf("Enter second value: ");
   scanf("%d",&y);
   printf("Enter third value: ");
   scanf("%d",&z);
   z=y;
   y=x;
   x=z;
   printf("First Number = %d\nSecond number = %d",x,y);
    return 0 ;
}
