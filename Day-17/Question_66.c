#include <stdio.h>
int main()
{
    int n,m,a1[10],a2[10],uni[20],i,j,k;
    printf("Enter the number of elements");
    scanf("%d",&n);
    printf("Enter the array elements in 1");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a1[i]);
    }
    printf("Enter the array elements in 2");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a2[i]);
    }
    m=n+n;
    for(i=0;i<n;i++)
    {
        uni[i]=a1[i];
    }
    for(i=0;i<n;i++)
    {
        uni[n+i]=a2[i];
    }
    for(i=0;i<m;i++)
    {
        for(j=i+1;j<m;j++)
        {
           if(uni[i]==uni[j])
           {
            for(k=j;k<m-1;k++)
            {
                uni[k]=uni[k+1];
            }
            m--;
            j--;
           } 
        }
    }
    printf("union of both the array is ");
    for(i=0;i<m;i++)
    {
        printf("%d ",uni[i]);
    }
    printf("\n");
    return 0;
}