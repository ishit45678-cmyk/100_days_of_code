//Find the second largest element in an array.
#include <stdio.h>
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int largest = arr[0];
    int secondLargest = -2147483648; // Smallest 32-bit int
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;   // Update second largest
            largest = arr[i];         // Update largest
        } 
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    if (secondLargest == -2147483648)
        printf("No second largest element (all elements are equal).\n");
    else
        printf("Second largest element = %d\n", secondLargest);
    return 0;
}