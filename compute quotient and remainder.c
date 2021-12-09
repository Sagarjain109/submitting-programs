//C program to compute quotient and remainder

#include<stdio.h>
int main()
{
   int x,y,Quotient,Remainder;
   printf("Enter Dividend: ");
   scanf("%d",&x);
   printf("Enter Divisor: ");
   scanf("%d",&y);
   Quotient=x/y;
   Remainder=x%y;
   printf("Quotient is %d\n",Quotient);
   printf("Remainder is %d",Remainder);
    return 0 ;
}
