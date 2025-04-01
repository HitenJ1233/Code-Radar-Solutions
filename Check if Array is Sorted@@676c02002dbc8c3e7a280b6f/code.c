#include <stdio.h>

int isSorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return 0; // Not sorted
        }
    }
    return 1; // Sorted
}

int main() {
    int n;
    
    // Taking array size as input
    scanf("%d", &n);
    
    int arr[n];
    
    // Taking array elements as input
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Checking if array is sorted
    if (isSorted(arr, n)) {
        printf("Sorted");
    } else {
        printf("NOT Sorted");
    }
    
    return 0;
}
