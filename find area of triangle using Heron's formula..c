//C program to find area of triangle using Heron's formula.

#include<stdio.h>
#include<math.h>
int main()
{
   float x,y,z,s,area;
   //s=perimeter
   printf("Enter sides of triangle: ");
   scanf("%f%f%f",&x,&y,&z);
   s=(x+y+z)/2;
   area=sqrt(s*(s-x)*(s-y)*(s-z));
   printf("Area of Square is %f",area);
    return 0 ;
}
