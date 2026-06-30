#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int i;
    for(i=1; i<=10; i++)
    {
        int r=n*i;
        printf("%d x %d = %d\n", n, i, r);
    }
    return 0;
}