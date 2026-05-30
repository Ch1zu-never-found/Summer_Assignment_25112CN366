#include <stdio.h>
int main()
{
    int n;
    printf("Enter the firstnumber: ");
    scanf("%d", &n);
    int m;int lcm;
    printf("Enter the second number: ");
    scanf("%d", &m);
    for(int i=1; i<=n && i<=m; i++)
    {
        if(n%i==0 && m%i==0)
        {
            lcm = (n*m)/i;
        }
    }
    printf("The LCM of %d and %d is: %d\n", n, m, lcm);
    return 0;
}