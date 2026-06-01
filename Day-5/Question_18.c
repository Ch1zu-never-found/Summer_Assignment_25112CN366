#include  <stdio.h>
int main()
{
    int n;
    printf("enter number to be checked: ");
    scanf("%d", &n);
    int n1=n, sum=0;
    int i,r;
    while(n>0)
    {
        r=n%10;
        int factorial=1;
        for(i=1;i<=r;i++)
        {
            factorial=factorial*i;
        }
        sum=sum+factorial;
        n=n/10;
    }
    if(sum==n1)
    {
        printf("number is strong");
    }
    else
    {
        printf("number is not strong");
    }
    return 0;
}