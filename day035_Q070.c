//Rotate an array to the right by k positions.
#include <stdio.h>
int main() {
    int n, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter k (right rotations): ");
    scanf("%d", &k);
    k = k % n;  // important if k > n
    while (k--) {
        int last = arr[n - 1]; // take last element
        // shift everything to the right
        for (int i = n - 1; i > 0; i--) {
            arr[i] = arr[i - 1];
        }
        arr[0] = last; // put the last element at the front
    }
    printf("Array after rotation:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}