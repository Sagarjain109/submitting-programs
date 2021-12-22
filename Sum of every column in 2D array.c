#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the row and column: ");
    scanf("%d%d",&a,&b);
    int x[a][b],i,j,sum=0;
    printf("Enter the elements in matrix: ");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            sum+=x[j][i];
            
        }  
        printf("%d\n",sum);
        sum=0;
    }
    return 0;
}