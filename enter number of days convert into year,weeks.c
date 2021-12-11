//C program to enter number of days convert into year,weeks
#include<stdio.h>
int main()
{
    float x,year,week;
    printf("Enter the number of days: ");
    scanf("%f",&x);
    week=x/7;
    year=x/365;
    printf("%f week\n",week);
    printf("%f year",year);
    
    return 0;
}