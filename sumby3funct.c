//sum from argument with no return 
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the numbers: ");
    scanf("%d%d",&x,&y);
    sum(x,y);
    return 0;
}
void sum(int a,int b)
{
    int z;
    z=a+b;
    printf("%d",z);
}
