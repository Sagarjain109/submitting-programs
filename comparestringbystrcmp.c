#include<stdio.h>
#include<string.h>
int main()
{
    char x[100],y[100];
    int len;
    gets (x);
    gets (y);
    
    if (strcmp(x,y)==0)  
        printf("Equal string");
    else if (strcmp(x,y)>1)
        printf("First string is greater than second");
    else
        printf("Second string greater than first");
    return 0;
}