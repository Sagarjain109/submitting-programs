//argment with no return
#include<stdio.h>
void swap(int a,int b)
{
    int z;
    z=a;
    a=b;
    b=z;
    printf("%d\n%d",a,b);


}
int main()
{
    int x,y;
    printf("Enter the values: ");
    scanf("%d%d",&x,&y);
    swap(x,y);
    return 0; 
}