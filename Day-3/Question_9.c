#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);    
   int prime = 1;
    if (n <= 1) {
        prime = 0;
    } else {
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                prime = 0;
                break;
            }
        }
    }
    if (prime) {
        printf("The number is prime.\n");
    } else {
        printf("The number is not prime.\n");
    }
    return 0;
}