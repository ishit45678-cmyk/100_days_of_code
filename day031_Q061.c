//Search for an element in an array using linear search.
#include <stdio.h>

int main(){
    int n, elem;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &elem);
    for(int i= 0 ;i<n;i++ ){
        if (arr[i]==elem){
            printf("Element is at index %d", i);
        }
        else{
            printf("Element not found");
        }
    }
    return 0;
}