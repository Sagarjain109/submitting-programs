/*Write a program to convert days into months and years*/
#include<stdio.h>
#include<math.h>
int main()
{   
    float d,m,y;
    printf("Enter No.of days: ");
    scanf("%f",&d);
    m=d/30;
    y=d/365;
    printf("%.2f Month\n",m);
    printf("%.2f Year",y);
    
    return 0;
}