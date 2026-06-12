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
    int reverse_arr[n];
    for (int i = 0; i < n; i++)
    {
        reverse_arr[i] = arr[n - 1 - i];
    }
    printf("The elements of the array in reverse order are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", reverse_arr[i]);
    }
    printf("\n");
    return 0;
}
