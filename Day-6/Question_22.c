#include <stdio.h>
int main() {
    int n;
    printf("enter number to be converted: ");
    scanf("%d", &n);
    int i;
    int decimal = 0;
    int base = 1;
    printf("decimal equivalent of binary %d is: ", n);
    while(n>0)
    {
        int remainder = n%10;
        decimal = decimal + remainder*base;
        base = base*2;
        n = n/10;
    }
    printf("%d", decimal);
    return 0;
}