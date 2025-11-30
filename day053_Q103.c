/*Write a Program to take an array of integers as input, calculate the pivot index of this array. 
The pivot index is the index where the sum of all the numbers strictly to the left of the index 
is equal to the sum of all the numbers strictly to the index's right. 
If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. 
This also applies to the right edge of the array. 
Print the leftmost pivot index. 
If no such index exists, print -1.*/
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements in the array");
    scanf("%d", &n);  // number of elements
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Step 1: Calculate total sum
    int totalSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }
    // Step 2: Find pivot index
    int leftSum = 0;
    for (int i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - arr[i];
        if (leftSum == rightSum) {
            printf("%d", i);
            return 0;
        }
        leftSum += arr[i];
    }
    // No pivot index found
    printf("-1");
    return 0;
}