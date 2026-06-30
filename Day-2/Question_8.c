#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);    
    int reverse = 0;
    int n_copy = n;
    while (n > 0) { 
        reverse = reverse * 10 + n % 10; 
        n /= 10;
    }
    if (reverse == n_copy) {
        printf("The number is a palindrome.\n");
    } else {
        printf("The number is not a palindrome.\n");
    }
    return 0;
}