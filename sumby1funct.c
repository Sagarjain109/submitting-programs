//no argument with no return
#include<stdio.h>
void sum()
{
    int x,y,z;
    printf("Enter values: ");
    scanf("%d%d",&x,&y);
    z=x+y;
    printf("%d",z);
}
int main()
{
    sum ();
    return 0;
}