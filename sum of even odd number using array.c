/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

**************************************************************************/
#include<stdio.h>
int main()
{
    int size;
    printf("enter the size o array");
    scanf("%d",&size);
    int x[size],i,z=0,y=0;
    for(i=0;i<=size-1;i++)
    {
        scanf("%d",&x[i]);
    }
    
    for(i=0;i<=size-1;i++)
    {
      if(x[i]%2==0)
      { 
      z+=x[i];
      }
      else 
      y+=x[i];
       
    }
    printf("sum of even number is  %d\n",z);
    printf("sum of odd number is %d",y);
    
    return 0;
}
