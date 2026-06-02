#include <stdio.h>
int main() {
    int n;
    printf("enter number to be converted: ");
    scanf("%d", &n);
    int i;
    printf("binary equivalent of %d is: ", n);
    for(i=31;i>=0;i--)
    {
        int k=n>>i;
        if(k&1)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
    return 0;
}
