//C program to find the volume of sphere
#include<stdio.h>
#define PI 3.14
int main()
{
    float r,volume;
    printf("Enter the radius of sphere: ");
    scanf("%f",&r);
    volume=(4.0/3.0)*PI*r*r*r;
    printf("Volume of sphere is %f",volume);
    return 0;
}