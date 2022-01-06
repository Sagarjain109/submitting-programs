//no argument with return 
#include<stdio.h>
int sum()
{
    int x,y,z;
    printf("Enter the values: ");
    scanf("%d%d",&x,&y);
    z=x+y;
    return z;
}
int main()
{
    printf("%d",sum());
    return 0;
}
