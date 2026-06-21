#include <stdio.h>
int main()
{
    int n,a1[10][10],sum=0,i,j;
    printf("Enter the number of rows and columns");
    scanf("%d",&n);
    printf("Enter the elements");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a1[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if((i==j)|| (i+j==n-1))
            {
                sum=sum+a1[i][j];
            }
        }
    }
    printf("Sum of diagonal of matrice is %d ",sum);
    return 0;
}