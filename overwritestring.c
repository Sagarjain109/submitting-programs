#include<stdio.h>
#include<string.h>
int main()
{
    char x[100],y[100];
    gets (x);
    gets (y);
    strcpy(x,y);
    puts (x);
    puts (y);
    return 0;
}