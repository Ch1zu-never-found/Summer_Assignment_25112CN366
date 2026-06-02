#include <stdio.h>
int main() {
    int n;
    int pow;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("enter the power: ");
    scanf("%d", &pow);
    int result=1;
    for(int i=0; i<pow; i++) {
        result=result*n;
    }  
    printf("%d raised to the power %d is: %d", n, pow, result);
    return 0;
}