#include <stdio.h>
int main()
{
    int n;
    printf("Enter the the last term of fibonacci series: ");
    scanf("%d", &n);
    int a=0, b=1, c;
    printf("The fibonacci series is: ");
    for(int i=1; i<=n; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}