//Write a program to enter temperature in fehranite and convert into Celsius.
#include<stdio.h>
int main()
{
    int C,F;
    //C=celsius,F=fehranite
    printf("Enter Degree in fehranite: ");
    scanf("%d",&F);
    C=(F-32)*(5/9);
    printf("%d Degree celsius",C);
    return 0;
    
}