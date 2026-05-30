#include <stdio.h>
int main()
{
    int n;
    printf("Enter the range of armstrong numbers: ");
    scanf("%d", &n);
    printf("Armstrong numbers between 1 and %d are: ", n);
    for(int i=1; i<=n; i++)
    {
        int armstrong = 0, temp = i, rem;
        while(temp != 0)
        {
            rem = temp % 10;
            armstrong += rem * rem * rem;
            temp /= 10;
        }
        if(armstrong == i)
        {
            printf("%d ", i);
        }
    }
    return 0;
}