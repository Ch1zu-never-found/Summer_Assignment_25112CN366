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
    int evenCount = 0;
    int oddCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }
    printf("Number of even elements: %d\n", evenCount);
    printf("Number of odd elements: %d\n", oddCount);
    return 0;
}