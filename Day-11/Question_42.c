#include <stdio.h>
int maximum(int a, int b) {
    return (a > b) ? a : b;
}
int main() {
    int n1, n2;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    int result = maximum(n1, n2);
    printf("The maximum of %d and %d is: %d\n", n1, n2 , result);
    return 0;
}