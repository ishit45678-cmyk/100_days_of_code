//Count positive, negative, and zero elements in an array.
#include <stdio.h>
int main() {
    int n,i,pos=0,neg=0,zeroes=0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];  
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]>0){
            pos++;
        }
        else if (arr[i]<0){
            neg++;
        }
        else
        zeroes++;
    }
    printf("Positive: %d\tNegative: %d\tZeroes: %d\n",pos, neg ,zeroes);
    return 0;
}