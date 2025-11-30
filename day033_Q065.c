//Search in a sorted array using binary search.
#include <stdio.h>
int main() {
    int n, i, key, low, high, mid;
    // Step 1: Input array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    // Step 2: Input sorted elements
    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Step 3: Input the element to search
    printf("Enter the element to search: ");
    scanf("%d", &key);
    // Step 4: Initialize boundaries for binary search
    low = 0;
    high = n - 1;
    int found = 0;
    // Step 5: Binary search loop
    while (low <= high) {
        mid = (low + high) / 2;  // Find middle index
        if (arr[mid] == key) {
            printf("Element %d found at position %d (index %d)\n", key, mid + 1, mid);
            found = 1;
            break;
        }
        else if (arr[mid] < key) {
            // Search in the right half
            low = mid + 1;
        }
        else {
            // Search in the left half
            high = mid - 1;
        }
    }
    // Step 6: If not found
    if (!found)
        printf("Element %d not found in the array.\n", key);

    return 0;
}