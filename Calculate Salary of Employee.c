/*Write a program to calculate salary of an employee,given his basic pay(Entered by user)
HRA=15% of basic pay and TA=20% of basic pay*/

#include<stdio.h>
int main()
{   
    float x,y,z,HRA,TA,X1;
    /*x=salary of employee,y=HRA in percentage,
    z=TA in percentage*/
    printf("How much salary given by Industry: ");
    scanf("%f",&x);
    printf("How much percentage of salary cutted for HRA: ");
    scanf("%f",&y);
    printf("How much percentage of salary cutted for TA: ");
    scanf("%f",&z);
    HRA=(y/100)*x;
    TA=(z/100)*x;
    X1=x-HRA-TA;
    printf("Amount of HRA = %.1f\n",HRA);
    printf("Amount of TA = %.1f\n",TA);
    printf("Salary of Employee = %.1f",X1);
    return 0;
}