//Perform diagonal traversal of a matrix.
#include <stdio.h>
int main() {
    int rows, cols;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    int matrix[rows][cols];
    printf("Enter the matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\nDiagonal Traversal:\n");
    for (int start = 0; start < rows; start++) {
        int i = start, j = 0;
        while (i >= 0 && j < cols) {
            printf("%d ", matrix[i][j]);
            i--;
            j++;
        }
        printf("\n");
    }
    for (int start = 1; start < cols; start++) {
        int i = rows - 1, j = start;
        while (i >= 0 && j < cols) {
            printf("%d ", matrix[i][j]);
            i--;
            j++;
        }
        printf("\n");
    }
    return 0;
}