/*Write a Program to take an integer array nums. 
Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. 
The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.*/
#include <stdio.h>
#include <stdlib.h>
void productExceptSelf(int arr[], int n) {
    int i;
    int *answer = (int *)malloc(n * sizeof(int));
    if (answer == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }
    int leftProduct = 1;
    for (i = 0; i < n; i++) {
        answer[i] = leftProduct;
        leftProduct *= arr[i];
    }
    int rightProduct = 1;
    for (i = n - 1; i >= 0; i--) {
        answer[i] *= rightProduct;
        rightProduct *= arr[i];
    }
    for (i = 0; i < n; i++) {
        if (i == n - 1) {
            printf("%d", answer[i]);
        } else {
            printf("%d, ", answer[i]);
        }
    }
    printf("\n");
    free(answer);
}
int main() {
    int n, i;
    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input for number of elements.\n");
        return 1;
    }
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    printf("Enter %d integer elements separated by spaces: ", n);
    for (i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input for element %d.\n", i + 1);
            free(arr);
            return 1;
        }
    }
    printf("Output: ");
    productExceptSelf(arr, n);
    free(arr);
    return 0;
}