//No argument with no return
#include<stdio.h>
void swap()
{
    int x,y,z;
    printf("Enter the values: ");
    scanf("%d%d",&x,&y);
    z=x;
    x=y;
    y=z;
    printf("%d\n%d",x,y);
}
int main()
{
    swap();
    return 0;
}