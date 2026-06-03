#include <stdio.h>
int reverse_number(int n) {
    int reversed = 0;
    while (n > 0) {
        int r = n % 10;
        reversed = reversed * 10 + r;
        n /= 10;
    }
    return reversed;
}
int main() {
    int n;
    printf("Enter a number to reverse: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Please enter a positive integer.\n");
    } else {
        printf("Reversed number of %d is: %d\n", n, reverse_number(n));
    }
    return 0;
}