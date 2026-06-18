#include <stdio.h>
int main()
{
    int n,i,j,a1[10],a2[10];
    printf("Enter the number of array elements");
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
    printf("common elements of both the array is ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a1[i]==a2[j])
            {
                printf("%d ",a1[i]);
                break;
            }
        }
    }
    return 0;

}