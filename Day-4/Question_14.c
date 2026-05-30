#include <stdio.h>
int main()
{
    int n;
    printf("Enter the nth term of the fibonacci series: ");
    scanf("%d", &n);
    int a=0, b=1, c;
    for(int i=1; i<n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    printf("The %dth term of the fibonacci series is: %d\n", n, a);
    return 0;
}