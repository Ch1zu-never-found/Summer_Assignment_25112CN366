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
    int ns;
    printf("Enter the number to search: ");
    scanf("%d", &ns);
    int found = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == ns)
        {
            found = 1;
            break;
        }
    }
    if (found)
    {
        printf("%d is present in the array.\n", ns);
    }
    else
    {
        printf("%d is not present in the array.\n", ns);
    }
    return 0;
}
