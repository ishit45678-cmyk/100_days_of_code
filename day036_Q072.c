//Find the sum of all elements in a matrix
#include <stdio.h>
int main(){
    int r , c , sum = 0;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    int arr[r][c];
    printf("Enter the elements of the matrix: ");
    for(int i =0; i<r ; i++){
        for(int j = 0 ; j<c ; j++){
            scanf("%d", &arr[r][c]);
            sum += arr[r][c];
        }
    }
    return 0;
}