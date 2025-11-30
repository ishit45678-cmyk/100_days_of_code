//Insert an element in an array at a given position.
#include <stdio.h>
int main() {
    int n, pos, val;
    // Step 1: Input array size
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    // Step 2: Input array elements
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Step 3: Input position and value to insert
    printf("Enter position to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);
    printf("Enter value to insert: ");
    scanf("%d", &val);
    // Step 4: Shift elements to the right
    for(int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    // Step 5: Insert the new element
    arr[pos - 1] = val;
    n++;                        // Increase size of array
    // Step 6: Display updated array
    printf("Array after insertion:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}