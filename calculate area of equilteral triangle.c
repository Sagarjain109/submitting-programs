//C program to calculate area of equilteral triangle
#include<stdio.h>
#include<math.h>
int main()
{
    float x,z;
    //z=area,x=side
    printf("Enter side of triangle: ");
    scanf("%f",&x);
    z=(sqrt(3)/4)*x*x;
    printf("Area of triangle is %.2f",z);
    
    return 0;
}