#include <stdio.h>
int main() 
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n; i++) 
    {
        sum += i;
    }
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);
    return 0;
}