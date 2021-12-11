/*Write a program to calculate final velocity*/
#include<stdio.h>
#include<math.h>
int main()
{   
    float v,u,a,s;
    printf("Ennter initial speed: ");
    scanf("%f",&u);
    printf("Enter acceleration: ");
    scanf("%f",&a);
    printf("Enter distance: ");
    scanf("%f",&s);
    v=sqrt(pow(u,2)+2*a*s);
    printf("Final Velocity = %.2f",v);
    
    return 0;
}