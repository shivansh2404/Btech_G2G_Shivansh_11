#include <stdio.h>

int main() {
    int rows, columns;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &columns);

    int matrix[rows][columns];
    int i, j, row_sum, col_sum;

    printf("Enter the elements of the matrix:\\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\\nThe elements in the matrix are:\\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\\n");
    }

    printf("\\nCalculation of Row Sums:\\n");
    for (i = 0; i < rows; i++) {
        row_sum = 0; 
        for (j = 0; j < columns; j++) {
            row_sum += matrix[i][j];
        }
        printf("Sum of elements in Row %d = %d\\n", i + 1, row_sum);
    }

    printf("\\nCalculation of Column Sums:\\n");
    for (j = 0; j < columns; j++) {
        col_sum = 0; 
        for (i = 0; i < rows; i++) {
            col_sum += matrix[i][j];
        }
        printf("Sum of elements in Column %d = %d\\n", j + 1, col_sum);
    }

    return 0;
}
