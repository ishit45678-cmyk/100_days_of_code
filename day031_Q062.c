//Reverse an array without taking extra space.
#include <stdio.h>
int main(){
    int n, i, temp;
    printf("Enter the number of elements of the array: ");
    scanf("%d" , &n);
    int arr[n];
    printf("\nEnter the elements: \n");
    for(i = 0; i < n ; i++){
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    printf("\nReversed array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}