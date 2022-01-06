//Linear search in array 
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of an array: ");
    scanf("%d",&size);
int x[size],i,search,found=0;
for(i=0;i<size;i++)
{
scanf("%d",&x[i]);
}
printf("\nEnter the element you want to search:");
scanf("%d",&search);
for(i=0;i<size;i++)
{
if(x[i]==search)
{
printf("\n Element %d is found at %d place",search,i+1);
}
}
}
