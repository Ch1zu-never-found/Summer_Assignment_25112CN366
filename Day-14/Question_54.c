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
    int frequency = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == ns)
        {
            frequency++;
        }
    }
    printf("Frequency of %d in the array: %d\n", ns, frequency);
    return 0;
}