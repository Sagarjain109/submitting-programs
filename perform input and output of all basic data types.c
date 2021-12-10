//C program to perform input/output of all basic data types
#include<stdio.h>
int main()
{
    char x;
    int y;
    float z;
    printf("What is your first letter of your name: ");
    scanf("%c",&x);
    printf("How old are you: ");
    scanf("%d",&y);
    printf("What is the value of PI: ");
    scanf("%f",&z);
    printf("First letter of your Name is %c\n",x);
    printf("You are %d years old\n",y);
    printf("You are correct\nValue of PI is %.2f",z);
    return 0;
}