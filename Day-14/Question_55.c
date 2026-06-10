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
    int l;
    int largest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
            l = i;
        }
    }
    int second_largest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (i==l)
        {
            continue;
        }
        if (arr[i] > second_largest)
        {
            second_largest = arr[i];
        }
    }
    printf("The second largest element in the array is: %d\n", second_largest);
    return 0;
}