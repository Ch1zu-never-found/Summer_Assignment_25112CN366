#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input for array size.\n");
        return 1;
    }

    int arr[n]; 
    printf("Enter %d elements of the array:\n", n);

    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Error reading input.\n");
            return 1;
        }
    }
    for (int i = 0; i < n - 1; i++) { 
        for (int j = 0; j < n - i - 1; j++) { 
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("\n--- The unique elements in the sorted array are:\n");
    if (n > 0) {
        printf("%d ", arr[0]);
        
        for (int i = 1; i < n; i++) {
            if (arr[i] != arr[i - 1]) {
                printf("%d ", arr[i]);
            }
        }
    } else {
        printf("The array was empty.\n");
    }

    return 0;
}
