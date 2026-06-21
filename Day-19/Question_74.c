#include <stdio.h>
int main()
{
    int r,c,a1[10][10],a2[10][10],sub[10][10],i,j;
    printf("Enter the number of rows and columns");
    scanf("%d %d",&r,&c);
    printf("Enter the elements in 1");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a1[i][j]);
        }
    }
    printf("Enter the elements in 2");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a2[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sub[i][j]=a1[i][j]-a2[i][j];
        }
    }
    printf("Subtraction of matrices is ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",sub[i][j]);
        }
        printf("\n");
    }
    return 0;
}