//C program to find power of any number
#include<stdio.h>
#include<math.h>
int main()
{
    float x,y,ans;
    printf("Enter the number: ");
    scanf("%f",&x);
    printf("How many power do you want to solve: ");
    scanf("%f",&y);
    ans=pow(x,y);
    printf("Ans is %.3f",ans);
    
    return 0;
}