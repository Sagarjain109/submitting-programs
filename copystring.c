#include<stdio.h>
int main()
{
    int i,count=0;
    char x[100],y[100];
    printf("Enter string: ");
    gets (x);
    for(i=0;x[i]!='\0';i++)
    {
        count++;
    }
    for(i=0;i<count;i++)
    {
        y[i]=x[i];
    }
    printf("String is: ");
    puts (y);
    return 0;

}