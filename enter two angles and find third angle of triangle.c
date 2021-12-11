//C program to enter two angles and find third angle of triangle 
#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,z;
    printf("Enter the first angle of triangle: ");
    scanf("%d",&x);
    printf("Enter second angle of triangle: ");
    scanf("%d",&y);
    z=180-(x+y);
    printf("Third angle of triangle is %d",z);
    
    return 0;
}