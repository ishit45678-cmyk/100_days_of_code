//Multiply two matrices.
#include <stdio.h>
int main() {
    int m, n, p;
    printf("Enter rows of Matrix A: ");
    scanf("%d", &m);
    printf("Enter columns of Matrix A (and rows of Matrix B): ");
    scanf("%d", &n);
    printf("Enter columns of Matrix B: ");
    scanf("%d", &p);
    int A[m][n], B[n][p], C[m][p];
    printf("Enter elements of Matrix A:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter elements of Matrix B:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            C[i][j] = 0;
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("\nProduct of Matrix A and B:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}