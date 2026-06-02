#include <stdio.h>
int main() {
    int n;
    int count=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n>0) {
        if(n&1)
            count++;
        n=n/2;
    }
    printf("Number of bits set: %d", count);
    return 0;
}
