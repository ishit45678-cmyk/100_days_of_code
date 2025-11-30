/*Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. 
The elements in the sorted array might be repeated. 
You need to print the first and last occurrence of the target and print the index of first and last occurrence. 
Print -1, -1 if the target is not present.*/
#include <stdio.h>
// Function to find first occurrence
int firstOccurrence(int nums[], int n, int target) {
    int left = 0, right = n - 1, ans = -1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (nums[mid] == target) {
            ans = mid;          // possible answer
            right = mid - 1;    // search left half
        }
        else if (nums[mid] > target) {
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }
    return ans;
}
// Function to find last occurrence
int lastOccurrence(int nums[], int n, int target) {
    int left = 0, right = n - 1, ans = -1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (nums[mid] == target) {
            ans = mid;          // possible answer
            left = mid + 1;     // search right half
        }
        else if (nums[mid] > target) {
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }
    return ans;
}
int main() {
    int n, i, target;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter sorted array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    printf("Enter target value: ");
    scanf("%d", &target);
    int first = firstOccurrence(nums, n, target);
    int last  = lastOccurrence(nums, n, target);
    printf("First occurrence index: %d\n", first);
    printf("Last occurrence index:  %d\n", last);
    return 0;
}