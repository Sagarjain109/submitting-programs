#include<stdio.h>
#include<string.h>
int main()
{
    char x[100],y[100];
    gets (x);
    gets (y);
    strcat(x,y);
    puts (x);
    return 0;

}