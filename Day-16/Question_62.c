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
    int max_freq = 0;
    int max_freq_element = arr[0];
    for (int i = 0; i < n; i++)
    {
        int freq = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                freq++;
            }
        }
        if (freq > max_freq)
        {
            max_freq = freq;
            max_freq_element = arr[i];
        }
    }
    printf("the maximum frequency is %d and the element in the array is: %d\n", max_freq, max_freq_element);
    return 0;
}