//Insert an element in a sorted array at the appropriate position.
#include <stdio.h>
int main() {
    int n, i, num, pos;
    // Step 1: Input number of elements
    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);
    int arr[100];  // can hold up to 100 elements
    // Step 2: Input sorted elements
    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Step 3: Input the new element to insert
    printf("Enter the element to insert: ");
    scanf("%d", &num);
    // Step 4: Find the position to insert
    pos = n;  // assume it goes at the end
    for (i = 0; i < n; i++) {
        if (num < arr[i]) {
            pos = i;
            break;
        }
    }
    // Step 5: Shift elements to the right to make space
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    // Step 6: Insert the new element
    arr[pos] = num;
    n++;  // array now has one more element
    // Step 7: Display the new sorted array
    printf("\nArray after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}