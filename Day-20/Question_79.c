#include <stdio.h>
int main()
{
    int r,c,arr[10][10],i,j,rsum=0;
    printf("Enter the number of rows and columns");
    scanf("%d %d",&r,&c);
    printf("Enter the array elements");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        rsum=0;
        for(j=0;j<c;j++)
        {
            rsum=rsum+arr[i][j];
        }
        printf("Sum of the row %d is %d \n ",i+1,rsum);
    }
    return 0;
}