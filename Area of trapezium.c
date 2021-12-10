//C program to find area of trapezium

#include<stdio.h>
int main()
{
    float x,y,h,area;
    //x and y are bases
    printf("Enter the bases of Trapezium: ");
    scanf("%f%f",&x,&y);
    printf("Enter the height of Trapezium: ");
    scanf("%f",&h);
    area=((x+y)/2)*h;
    printf("Area of Trapezium is %f",area);
    
    return 0;
    
}