//No argument with no return
#include<stdio.h>
void check()
{
    int x;
    printf("Enter the number: ");
    scanf("%d",&x);
    if(x%2==0)
    {
        printf("Number is even");
    }
    else
    {
        printf("Number is odd");
    }

}
int main()
{
    check();
    return 0;
}

