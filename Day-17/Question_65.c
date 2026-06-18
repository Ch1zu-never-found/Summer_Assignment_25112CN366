#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int m;
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &m);
    int arr[n], arr2[m];
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Error reading input.\n");
            return 1;
        }
    }
    for (int i = 0; i < m; i++) {
        if (scanf("%d", &arr2[i]) != 1) {
            printf("Error reading input.\n");
            return 1;
        }
    }
    int l=n+m;
    int arr3[l];
    for (int i = 0; i <l;i++) {
        if(i<n){
            arr3[i]=arr[i];
        }
        else{
            arr3[i]=arr2[i-n];
        }
    }
    printf("\nThe unique elements in the merged array are:\n");
    if (l > 0) {
        printf("%d ", arr3[0]);
        
        for (int i = 1; i < l; i++) {
            if (arr3[i] != arr3[i - 1]) {
                printf("%d ", arr3[i]);
            }
        }
    } else {
        printf("The array was empty.\n");
    }
}
