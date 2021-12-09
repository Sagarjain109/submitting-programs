//C program to find ASCII value of whole keyboard keys

#include<stdio.h>
int main()
{
   int i=0;
   while(i<=255)
   {
    printf("ASCII Value of %c is %d\n",i,i);
    
    i++;
   }
    
    return 0 ;
}
