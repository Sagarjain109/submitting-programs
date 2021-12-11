/*The population of the city is 30000.It increases by 20% during first year and 30% during
second year.Write the program to find the population after two years*/

#include<stdio.h>
int main()
{   
    float x,y,z,y1,y2,z1,x1;
    /*x=present population,y=Increases in first year in percentage,
    z=increases in second year in percentage*/
    printf("present population: ");
    scanf("%f",&x);
    printf("Increases percentage in first year: ");
    scanf("%f",&y);
    printf("Increases percentage in second year: ");
    scanf("%f",&z);
    y1=(y/100)*x;
    y2=x+y1;
    z1=(z/100)*y2;
    x1=x+y1+z1;
    printf("Population increases in first year = %.1f\n",y1);
    printf("Population increases in second year = %.1f\n",z1 );
    printf("Total population after two year = %.1f",x1);
    return 0;
}