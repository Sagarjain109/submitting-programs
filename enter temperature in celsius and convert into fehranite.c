//Write a program to enter temperature in celsius and convert into fehranite.
#include<stdio.h>
int main()
{
    int C,F;
    //C=celsius,F=fehranite
    printf("Enter Degree in Celsius: ");
    scanf("%d",&C);
    F=(C*(9/5)+32);
    printf("%dfehranite",F);
    return 0;
    
}