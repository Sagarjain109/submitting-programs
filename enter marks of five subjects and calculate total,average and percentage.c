//C program to enter marks of five subjects and calculate total,average and percentage
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,e,t;
    float p,av;
    //t=total,p=percentage,av=average
    printf("Enter Marks of subjects one by one: ");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    t=a+b+c+d+e;
    p=(t/500)*100;
    av=t/5;
    printf("Total is %.0f\n",t);
    printf("Average is %.2f\n",av);
    printf("Percentage is %.1f",p);
    
    return 0;
}