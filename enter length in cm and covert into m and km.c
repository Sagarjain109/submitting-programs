//Write a program to enter length in cm and covert into m and km.
#include<stdio.h>
#define PI 3.14
int main()
{
    float l,m,km;
    //m=meter,km=kilometer,l=length
    printf("Enter length in cm: ");
    scanf("%f",&l);
    m=0.01*l;
    km=0.00001*l;
    printf("%fm\n",m);
    printf("%fkm",km);
    return 0;
    
}