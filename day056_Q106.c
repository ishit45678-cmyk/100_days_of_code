/*Write a program to take an array arr[] of integers as input, 
the task is to find the next greater element for each element of the array in order of their appearance in the array. 
Next greater element of an element in the array is the nearest element on the right which is greater than the current element. 
If there does not exist next greater of current element, then next greater element for current element is -1.
N.B:
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve.*/
#include <stdio.h>
#include <stdlib.h>
void findNextGreaterElements(int arr[], int n) {
    int next, i, j;
    for (i = 0; i < n; i++) {
        next = -1;
        for (j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                next = arr[j];
                break;
            }
        }
        if (i == n - 1) {
            printf("%d", next);
        } else {
            printf("%d, ", next);
        }
    }
    printf("\n");
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
    findNextGreaterElements(arr, n);
    free(arr);
    return 0;
}