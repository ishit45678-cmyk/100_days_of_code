//Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>
int main(){
    int rows , cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    int arr[rows][cols];
    printf("Enter the elements of the matrix: ");
    for(int i =0; i<rows ; i++){
        for(int j = 0 ; j<cols ; j++){
            scanf("%d", &arr[rows][cols]);
        }
    }
    int rowSum[rows];
     for (int i = 0; i < rows; i++) {
        rowSum[i] = 0;   
        for (int j = 0; j < cols; j++) {
            rowSum[i] += arr[i][j];
        }
    }
    printf("\n The sum is \n");
     for (int i = 0; i < rows; i++) {
        rowSum[i] = 0;   
        for (int j = 0; j < cols; j++) {
            rowSum[i] += arr[i][j];
        }
    }
    return 0;
}