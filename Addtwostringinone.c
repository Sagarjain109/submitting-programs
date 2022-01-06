#include<stdio.h>
int main()
{
    int i,j,count=0;
    char x[100],y[100];
    printf("Enter first string: ");
    gets (x);
    printf("Enter second string: ");
    gets (y);
    for(i=0;x[i]!='\0';i++)
    {
        count++;
    }
    printf("Length is %d\n",count);
    for(i=count,j=0;y[j]!='\0';i++,j++)
    {
        x[i]=y[j];
    }
    puts (x);
}