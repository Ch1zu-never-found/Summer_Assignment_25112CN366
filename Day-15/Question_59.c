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
    int leftrotated_arr[n];
    int k;
    printf("Enter the number of positions to rotate the array to the left: ");
    scanf("%d", &k);
    for (int i = 0; i < n; i++)
    {
        leftrotated_arr[i] = arr[(i + k) % n];
    }
    printf("The elements of the array after left rotation are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", leftrotated_arr[i]);
    }
    printf("\n");
    return 0;
    
}