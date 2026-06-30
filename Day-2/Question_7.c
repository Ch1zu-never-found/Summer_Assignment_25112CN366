#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);    
    int product = 1;
    while (n > 0) {
        product *= n % 10; 
        n /= 10;
    }
    printf("The product of the digits is: %d\n", product);
    return 0;
}