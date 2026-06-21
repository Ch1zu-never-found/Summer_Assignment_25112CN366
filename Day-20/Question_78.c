#include <stdio.h>
int main()
{
    int n,arr[10][10],trans[10][10],i,j;
    printf("Enter the number of rows and columns");
    scanf("%d",&n);
    printf("Enter the array elements");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            trans[j][i]=arr[i][j];
        }
    }
    int flag=1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[i][j] != trans[i][j])
            {
                flag=0;
                break;
            }
        }
    }
    if(flag==1)
    {
        printf("Matrix is symmetric");
    }
    else
    {
        printf("Matrix is not symmetric");
    }
    return 0;
}