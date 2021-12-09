//C program to find ASCII value of a all character

#include<stdio.h>
int main()
{
   char ch='a';
   while(ch<='z')
   {
    printf("ASCII Value of %c is %d\n",ch,ch);
    
    ch++;
   }
    
    return 0 ;
}
