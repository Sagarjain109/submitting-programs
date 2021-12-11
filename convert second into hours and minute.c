/*Write a program to covert second into hours and minute*/
#include<stdio.h>
#include<math.h>
int main()
{   
    float s,h,m;
    printf("Enter Seconds: ");
    scanf("%f",&s);
    m=s/60;
    h=s/(60*60);
    printf("%.2f minute\n",m);
    printf("%.2f hour",h);
    
    return 0;
}