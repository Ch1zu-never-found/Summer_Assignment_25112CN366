#include <stdio.h>
int main()
{
    int n;
    printf("enter number to be checked: ");
    scanf("%d", &n);
    int n1=n, sum=0;
    int i;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        sum=sum+i;
    }
    if(sum==n1)
    {
        printf("number is perfect");
    }
    else
    {
        printf("number is not perfect");
    }
    return 0;
}