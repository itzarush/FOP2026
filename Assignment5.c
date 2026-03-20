#include <stdio.h>

void main () {

    // Assignment 05
    // Program to perform basic matrix operations
    // - Addition of two matrixes
    // - Saddle point of a matrix
    // - Inverse of a matrix
    // - Magic Square of a matrix

    int matrix_add () {

        // Matrix addition

        int rows, cols, i, j;
        printf("Enter number of rows: ");
        scanf("%d", &rows);
        printf("Enter number of columns: ");
        scanf("%d", &cols);

        int matrix1[rows][cols], matrix2[rows][cols], sum[rows][cols];

        printf("Enter elements of first matrix:\n");
        for(i = 0; i < rows; i++) {
            for(j = 0; j < cols; j++) {
                printf("Element [%d][%d]: ", i + 1, j + 1);
                scanf("%d", &matrix1[i][j]);
            }
        }

        printf("Enter elements of second matrix:\n");
        for(i = 0; i < rows; i++) {
            for(j = 0; j < cols; j++) {
                printf("Element [%d][%d]: ", i + 1, j + 1);
                scanf("%d", &matrix2[i][j]);
            }
        }

        // Adding the two matrices
        for(i = 0; i < rows; i++) {
            for(j = 0; j < cols; j++) {
                sum[i][j] = matrix1[i][j] + matrix2[i][j];
            }
        }

        printf("Sum of the two matrices is:\n");
        for(i = 0; i < rows; i++) {
            for(j = 0; j < cols; j++) {
                printf("%d ", sum[i][j]);
            }
            printf("\n");
        }

        return 0;
    }

    int saddle_point () {

        // Saddle point of a matrix

        // Input and Display the matrix
        int rows, cols, i, j;
        printf("Enter number of rows: ");
        scanf("%d", &rows);
        printf("Enter number of columns: ");
        scanf("%d", &cols);
        int matrix[rows][cols];
        printf("Enter elements of the matrix:\n");
        for(i = 0; i < rows; i++) {
            for(j = 0; j < cols; j++) {
                printf("Element [%d][%d]: ", i + 1, j + 1);
                scanf("%d", &matrix[i][j]);
                }
        }

        printf("The matrix is:\n");
        for(i = 0; i < rows; i++) {
            for(j = 0; j < cols; j++) {
                printf("%d ", matrix[i][j]);
            }
            printf("\n");
        }

        // Saddle point calculation

        int saddle_found = 0;

        for(i = 0; i < rows; i++) {
            int min_row = matrix[i][0];
            int col_index = 0;
            for(j = 1; j < cols; j++) {
                if(matrix[i][j] < min_row) {
                    min_row = matrix[i][j];
                    col_index = j;
                }
            }

            int is_saddle = 1;
            for(j = 0; j < rows; j++) {
                if(matrix[j][col_index] > min_row) {
                    is_saddle = 0;
                    break;
                }
            }
            if(is_saddle) {
                printf("Saddle point found at (%d, %d): %d\n", i + 1, col_index + 1, min_row);
                saddle_found = 1;
            }
        }
        if(!saddle_found) {
            printf("No saddle point found in the matrix.\n");
        }

        return 0;
    }

    int inverse_matrix () {

        // Inverse of a matrix
        printf("Inverse calculation for matrices larger than 2x2 is not implemented.\n");

        // Input and Display the matrix
        int rows, cols, i, j;
        printf("Enter number of rows: ");
        scanf("%d", &rows);
        printf("Enter number of columns: ");
        scanf("%d", &cols);
        int matrix[rows][cols];
        printf("Enter elements of the matrix:\n");
        for(i = 0; i < rows; i++) {
            for(j = 0; j < cols; j++) {
                printf("Element [%d][%d]: ", i + 1, j + 1);
                scanf("%d", &matrix[i][j]);
                }
        }
        printf("The matrix is:\n");
        for(i = 0; i < rows; i++) {
            for(j = 0; j < cols; j++) {
                printf("%d ", matrix[i][j]);
            }
            printf("\n");
        }

        // Inverse Calculation
        if(rows != cols) {
            printf("Matrix is not square, inverse cannot be calculated.\n");
        }

        else if (rows > 2) {
            printf("Inverse calculation for matrices larger than 2x2 is not implemented.\n");
        }
        else if(rows == 1) {
            if(matrix[0][0] != 0) {
                printf("Inverse of the matrix is: %f\n", 1.0 / matrix[0][0]);
            } else {
                printf("Matrix is singular, inverse does not exist.\n");
            }
        }
        else if(rows == 2) {
            int det = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
            if(det == 0) {
                printf("Matrix is singular, inverse does not exist.\n");
            }
            float inverse[2][2];
            inverse[0][0] = matrix[1][1] / (float)det;
            inverse[0][1] = -matrix[0][1] / (float)det;
            inverse[1][0] = -matrix[1][0] / (float)det;
            inverse[1][1] = matrix[0][0] / (float)det;

            printf("Inverse of the matrix is:\n");
            for(i = 0; i < 2; i++) {
                for(j = 0; j < 2; j++) {
                    printf("%f ", inverse[i][j]);
                }
                printf("\n");
            }

        }

        return 0;
    }

    int magic_square () {

        // Check whether a matrix is a magic square

        // Input and Display the matrix
        int rows, cols, i, j;
        printf("Enter number of rows: ");
        scanf("%d", &rows);
        printf("Enter number of columns: ");
        scanf("%d", &cols);
        int matrix[rows][cols];
        printf("Enter elements of the matrix:\n");
        for(i = 0; i < rows; i++) {
            for(j = 0; j < cols; j++) {
                printf("Element [%d][%d]: ", i + 1, j + 1);
                scanf("%d", &matrix[i][j]);
                }
        }
        printf("The matrix is:\n");
        for(i = 0; i < rows; i++) {
            for(j = 0; j < cols; j++) {
                printf("%d ", matrix[i][j]);
            }
            printf("\n");
        }

        // Check for magic square
        if(rows != cols) {
            printf("Matrix is not a magic square (not square matrix).\n");
            return 0;
        }
        int magic_sum = 0;
        for(j = 0; j < cols; j++) {
            magic_sum += matrix[0][j];
        }

        // Check rows
        int is_magic = 1;
        for(i = 0; i < rows; i++) {
            int row_sum = 0;
            for(j = 0; j < cols; j++) {
                row_sum += matrix[i][j];
            }
            if(row_sum != magic_sum) {
                is_magic = 0;
                break;
            }
        }

        // Check columns
        if(is_magic) {
            for(j = 0; j < cols; j++) {
                int col_sum = 0;
                for(i = 0; i < rows; i++) {
                    col_sum += matrix[i][j];
                }
                if(col_sum != magic_sum) {
                    is_magic = 0;
                    break;
                }
            }
        }

        // Check diagonals
        if(is_magic) {
            int diag1_sum = 0, diag2_sum = 0;
            for(i = 0; i < rows; i++) {
                diag1_sum += matrix[i][i];
                diag2_sum += matrix[i][rows - 1 - i];
            }
            if(diag1_sum != magic_sum || diag2_sum != magic_sum) {
                is_magic = 0;
            }
        }

        if(is_magic) {
            printf("The matrix is a magic square with sum %d.\n", magic_sum);
        } else {
            printf("The matrix is not a magic square.\n");
        }

        return 0;
    }


    // Menu driven main program
    int choice;

    printf("Choose an operation to perform:\n");
    printf("1. Addition of two matrices\n");
    printf("2. Saddle point of a matrix\n");
    printf("3. Inverse of a matrix\n");
    printf("4. Magic Square of a matrix\n");
    printf("Enter your choice (1-4): ");

    scanf("%d", &choice);

    switch (choice) {
        case 1:
            matrix_add();
            break;
        case 2:
            printf("You chose Saddle point of a matrix.\n");
            saddle_point();
            break;
        case 3:
            printf("You chose Inverse of a matrix.\n");
            inverse_matrix();
            break;
        case 4:
            printf("You chose Magic Square of a matrix.\n");
            magic_square();
            break;
        default:
            printf("Invalid choice. Please select a number between 1 and 4.\n");
    }
}