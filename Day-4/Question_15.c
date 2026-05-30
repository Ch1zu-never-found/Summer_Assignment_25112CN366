#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number to be checked: ");
    scanf("%d", &n);
    int armstrong = 0, temp = n, rem;
    while(temp != 0)
    {
        rem = temp % 10;
        armstrong += rem * rem * rem;
        temp /= 10;
    }
    if(armstrong == n)
    {
        printf("%d is an armstrong number.\n", n);
    }
    else
    {
        printf("%d is not an armstrong number.\n", n);
    }
    return 0;
}