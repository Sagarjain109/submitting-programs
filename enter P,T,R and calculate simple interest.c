//C program to enter P,T,R and calculate simple interest
#include<stdio.h>
#include<math.h>
int main()
{
    int p,t,r,si;
    printf("Enter Principle: ");
    scanf("%d",&p);
    printf("Enter time in year: ");
    scanf("%d",&t);
    printf("Enter Rate: ");
    scanf("%d",&r);
    si=(p*r*t)/100;
    printf("Simple Interest = %d\n",si);
    return 0;
}