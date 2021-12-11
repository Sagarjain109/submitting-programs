//C program to enter any number and calculate its square root
#include<stdio.h>
#include<math.h>
int main()
{
    float x,ans;
    printf("Enter the number: ");
    scanf("%f",&x);
    ans=sqrt(x);
    printf("Answer is %.3f",ans);
    
    return 0;
}