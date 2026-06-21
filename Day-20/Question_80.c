#include <stdio.h>
int main()
{
    int r,c,arr[10][10],csum=0,i,j;
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
    for(j=0;j<c;j++)
    {
        csum=0;
        for(i=0;i<r;i++)
        {
            csum=csum+arr[i][j];
        }
            printf("Column sum of the column %d is %d \n",j+1,csum);
    }
    return 0;

}