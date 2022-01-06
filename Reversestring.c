#include<stdio.h>
int main()
{
    int i,count=0;
    char x[100];
    printf("Enter string: ");
    gets (x);
    for(i=0;x[i]!='\0';i++)
    {
        count++;
    }
    for(i=count-1;i>=0;i--)
    {
        printf("%c",x[i]);
    }
    return 0;
}