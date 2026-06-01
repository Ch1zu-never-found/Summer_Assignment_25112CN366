#include <stdio.h>
int main() {
    int n;
    printf("enter number to be checked: ");
    scanf("%d", &n);
    int i;
    printf("factors of %d are: ", n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}