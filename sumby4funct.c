//argument with return
#include<stdio.h>
int sum(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
int main()
{
    int x,y,z;
    printf("Enter the number: ");
    scanf("%d%d",&x,&y);
    z=sum(x,y);
    printf("%d",z);
    return 0;

}