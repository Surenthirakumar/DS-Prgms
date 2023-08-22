#include <stdio.h>

int main() {
    int rows, cols,i,j;
	printf("Name : J SURENTHIRA KUMAR\nReg no :192121140");
    printf("\nEnter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    printf("Enter the matrix elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int largest = matrix[0][0];

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (matrix[i][j] > largest) {
                largest = matrix[i][j];
            }
        }
    }

    printf("The largest element in the matrix is: %d\n", largest);

    return 0;
}

