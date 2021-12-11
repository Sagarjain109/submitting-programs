/*Write a program to calculate final veloxity and distance*/
#include<stdio.h>
#include<math.h>
int main()
{   
    float v,u,a,t,s=0;
    printf("Ennter initial velocity: ");
    scanf("%f",&u);
    printf("Enter acceleration: ");
    scanf("%f",&a);
    printf("Enter time: ");
    scanf("%f",&t);
    v=u+a*t;
    s=((u*t)+0.5*a*t*t);
    printf("Final Velocity = %.1f\n",v);
    printf("Distance travelled = %.1f",s);
    
    return 0;
}