#include <stdio.h>
int main()
{
    int r,c,a1[10][10],trans[10][10],i,j;
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
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            trans[j][i]=a1[i][j];
        }
    }
    printf("Transpose of matrices is ");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d ",trans[i][j]);
        }
        printf("\n");
    }
    return 0;
}