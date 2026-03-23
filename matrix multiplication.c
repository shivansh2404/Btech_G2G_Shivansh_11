#include <stdio.h>

int main() {
    int m1_rows, m1_cols, m2_rows, m2_cols;
    int i, j, k;
    int sum = 0;

    printf("Enter the number of rows and columns for the first matrix : ");
    scanf("%d %d", &m1_rows, &m1_cols);
    printf("Enter the number of rows and columns for the second matrix : ");
    scanf("%d %d", &m2_rows, &m2_cols);

    if (m1_cols != m2_rows) {
        printf("\nError: Matrix multiplication is not possible.\n");
        printf("The number of columns in the first matrix must be equal to the number of rows in the second matrix.\n");
        return 1; 
    }

    int mat1[m1_rows][m1_cols], mat2[m2_rows][m2_cols], result[m1_rows][m2_cols];

    printf("\nEnter elements of the first matrix:\n");
    for (i = 0; i < m1_rows; i++) {
        for (j = 0; j < m1_cols; j++) {
            printf("Enter element mat1[%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("\nEnter elements of the second matrix:\n");
    for (i = 0; i < m2_rows; i++) {
        for (j = 0; j < m2_cols; j++) {
            printf("Enter element mat2[%d][%d]: ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

    for (i = 0; i < m1_rows; i++) { 
        for (j = 0; j < m2_cols; j++) { 
            result[i][j] = 0; 
            for (k = 0; k < m1_cols; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    printf("\nResultant matrix:\n");
    for (i = 0; i < m1_rows; i++) {
        for (j = 0; j < m2_cols; j++) {
            printf("%d\t", result[i][j]); 
        }
        printf("\n"); 
    }

    return 0;
}
