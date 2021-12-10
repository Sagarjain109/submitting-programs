//Write a program to enter length and breadth of a rectangle and find its perimeter and area
#include<stdio.h>
int main()
{
    float l,b,perimeter,area;
    printf("Enter length of rectangle: ");
    scanf("%f",&l);
    printf("Enter the breadth of rectangle: ");
    scanf("%f",&b);
    perimeter=2*(l+b);
    area=l*b;
    printf("Perimeter of Rectangle is %.3f\n",perimeter);
    printf("Area of Rectangle is %.3f",area);
    return 0;
    
}