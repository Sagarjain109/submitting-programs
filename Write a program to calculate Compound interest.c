/*Write a program to calculate Compound interest*/
#include<stdio.h>
#include<math.h>
int main()
{   
    float P,R,T,CI;
    printf("Enter Principle: ");
    scanf("%f",&P);
    printf("Enter Rate: ");
    scanf("%f",&R);
    printf("Enter Time: ");
    scanf("%f",&T);
    CI=P*pow((1.0+(R/100)),T);
    printf("Compound Interest = %.2f",CI);
    
    return 0;
}