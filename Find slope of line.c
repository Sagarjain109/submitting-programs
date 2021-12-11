/*Write a program to find the slope of line that passes through
two pointsP,Q wuth coordinates(x1,y1) and (x2,y2) respectively*/
#include<stdio.h>
int main()
{   
    float x1,x2,y1,y2,slope;
    printf("Enter P-point coordinates: ");
    scanf("%f%f",&x1,&y1);
    printf("Enter Q-point coordinates: ");
    scanf("%f%f",&x2,&y2);
    slope=(y2-y1)/(x2-x1);
    printf("Slope = %.1f",slope);
    
    return 0;
}