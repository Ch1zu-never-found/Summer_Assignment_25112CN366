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
    int rightrotated_arr[n];
    int k;
    printf("Enter the number of positions to rotate the array to the right: ");
    scanf("%d", &k);
    for (int i = 0; i < n; i++)
    {
        rightrotated_arr[(i + k) % n] = arr[i];
    }
    printf("The elements of the array after right rotation are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", rightrotated_arr[i]);
    }
    printf("\n");
    return 0;
    
}