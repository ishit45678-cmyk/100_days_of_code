//Delete an element from an array.
#include <stdio.h>
int main(){
    int n, i, pos;
    printf("Enter the number of elements of the array: ");
    scanf("%d" , &n);
    int arr[n];
    printf("\nEnter the elements: \n");
    for(i = 0; i < n ; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the position to delete: ");
    scanf("%d" , &pos);
    if(pos<0 || pos > n){
        pritnf("Invalid Position");
    }
    for(int i = pos -1 ; i < n -1 ; i++){
        arr[i] = arr[i-1];
    }
    n--;
    printf("Array after deletion: ");
    for(int i = 0 ; i<n;i++){
        printf("%d", arr[i]);
    }
    return 0;
}