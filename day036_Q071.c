//Read and print a matrix.
#include <stdio.h>
int main(){
    int r , c;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    int arr[r][c];
    printf("Enter the elements of the matrix: ");
    for(int i =0; i<r ; i++){
        for(int j = 0 ; j<c ; j++){
            scanf("%d", &arr[r][c]);
        }
    }
    printf("\n The Matrix is \n");
    for(int i =0; i<r ; i++){
        for(int j = 0 ; j<c ; j++){
            printf("%d", arr[r][c]);
        }
    }
    return 0;
}