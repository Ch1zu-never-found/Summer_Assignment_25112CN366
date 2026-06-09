#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    int sum = 0;double avg;
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    avg = (double)sum / n;
    printf("The sum of the elements in the array is: %d\n", sum);
    printf("The average of the elements in the array is: %.2f\n", avg);
    return 0;
}