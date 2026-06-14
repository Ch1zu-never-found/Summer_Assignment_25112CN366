#include <stdio.h>
#include <stdbool.h>
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
    bool found = false;
    printf("the missing elements in the array are:\n");
    for (int i = 1; i <= n; i++)
    {
        found = false;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == i)
            {
                found = true;
                break;
            }
        }
        if (!found)
        {
            printf("%d ", i);
        }
    }
    return 0;
}