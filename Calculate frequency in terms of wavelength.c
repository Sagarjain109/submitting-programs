/*Write a program to calculate frequency*/
#include<stdio.h>
int main()
{   
    float s,w,f;
    printf("Enter Wavelength: ");
    scanf("%f",&w);
    printf("Enter speed: ");
    scanf("%f",&s);
    f=s/w;
    printf("frequency = %.2fHz",f);
    
    return 0;
}