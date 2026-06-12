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
    int n2[n];
    int k=1;
    int j=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==0)
        {
        n2[n-k]=arr[i];
        k++;
        }
        else
        {
            n2[j]=arr[i];
            j++;
        }
    }
    printf("The elements of the array after moving all zeros to the end are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", n2[i]);
    }
    printf("\n");
    return 0;
}   