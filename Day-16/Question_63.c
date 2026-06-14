#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }       
    int m[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &m[i]);
    }
    int sum;
    printf("Enter the sum which pairs of elements in the array should add up to: ");
    scanf("%d", &sum);
    printf("the pairs of elements in the array that add up to %d are:\n", sum);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] + m[j] == sum)
            {
                printf("%d and %d\n", arr[i], m[j]);
            }
        }
    }
    return 0;
}