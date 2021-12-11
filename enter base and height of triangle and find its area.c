//C program to enter base and height of triangle and find its area
#include<stdio.h>
#include<math.h>
int main()
{
    float x,y,z;
    //z=area
    printf("Enter the base of triangle: ");
    scanf("%f",&x);
    printf("Enter height of triangle: ");
    scanf("%f",&y);
    z=(x*y)/2;
    printf("Area of triangle is %.2f",z);
    
    return 0;
}