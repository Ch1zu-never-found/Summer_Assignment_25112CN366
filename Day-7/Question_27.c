#include <stdio.h>
int sum_of_digits(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 10) + sum_of_digits(n / 10);
}
int main() {
    int n;
    printf("Enter a number to find the sum of its digits: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Please enter a positive integer.\n");
    } else {
        printf("Sum of digits of %d is: %d\n", n, sum_of_digits(n));
    }
    return 0;
}