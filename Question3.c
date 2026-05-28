#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int i;
    int sum = 1;
    for(i=1; i<=n; i++)
    {
        sum *= i;
    }
    printf("The factorial of %d is: %d\n", n, sum);
    return 0;
}