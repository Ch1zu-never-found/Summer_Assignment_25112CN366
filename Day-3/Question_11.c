#include  <stdio.h>
int main()
{
    int n;
    printf("Enter the first number: ");
    scanf("%d", &n);
    int m;int gcd;
    printf("Enter the second number: ");
    scanf("%d", &m);
    for(int i=1; i<=n && i<=m; i++)
    {
        if(n%i==0 && m%i==0)
        {
            gcd = i;
        }
    }
    printf("The GCD of %d and %d is: %d\n", n, m, gcd);
    return 0;
}