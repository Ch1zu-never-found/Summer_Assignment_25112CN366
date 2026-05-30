#include <stdio.h>
int main()
{
    int n;
    printf("Enter a range of numbers: ");
    scanf("%d", &n);    
    int prime;
    printf("Prime numbers between 1 and %d are:\n", n);
    for (int num = 2; num <= n; num++) {
        prime = 1;
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                prime = 0;
                break;
            }
        }
        if (prime) {
            printf("%d ", num);
        }
    }
    return 0;
}