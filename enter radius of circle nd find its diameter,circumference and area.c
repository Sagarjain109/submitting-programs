//Write a program to enter radius of circle nd find its diameter,circumference and area
#include<stdio.h>
#define PI 3.14
int main()
{
    float r,diameter,circumference,area;
    printf("Enter radius of circle: ");
    scanf("%f",&r);
    diameter=2*r;
    circumference=2*PI*r;
    area=PI*r*r;
   
    printf("Diameter of circle is %.3f\n",diameter);
    printf("Circumference of circle is %.3f\n",circumference);
    printf("Area of circle is %.3f",area);
    return 0;
    
}