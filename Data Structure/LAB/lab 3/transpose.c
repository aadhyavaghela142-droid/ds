#include <stdio.h>

int main() {
    int A[10][10], T[10][10];
    int i, j, n;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter elements of matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            T[j][i] = A[i][j];
        }
    }

    printf("Transpose of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", T[i][j]);
        }
        printf("\n");
    }

    return 0;
}
