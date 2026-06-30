#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int i=0,r;
    while(n>0)
    {
        r=n%10;
        i=i+1;
        n=n/10;
    }
    printf("The number of digits is: %d \n", i);
    return 0;
}