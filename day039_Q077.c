//Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>
int main() {
    int rows, cols;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    int matrix[rows][cols];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int isDistinct = 1;  
    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < rows; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                isDistinct = 0;
                break;
            }
        }
        if (!isDistinct)
            break;
    }
    if (isDistinct)
        printf("\nAll diagonal elements are DISTINCT.\n");
    else
        printf("\nDiagonal elements are NOT distinct.\n");

    return 0;
}