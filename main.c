#include <stdio.h>
#include <stdlib.h>

int** createMatrix(int rows, int cols) {
    int ** matrix;
    matrix = (int**)calloc(rows ,sizeof(int*));
    for(int i = 0; i < rows; i++) {
        matrix[i] = (int*)calloc(cols, sizeof(int));
    }
    return matrix;
}

void insertValues2X2Matrix(int a, int b, int c, int d, int** matrix) {
    matrix[0][0] = a;
    matrix[0][1] = b;
    matrix[1][0] = c;
    matrix[1][1] = d;
}

void printMatrix(int** matrix, int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%4d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int ** multiSquareMatrix(int** matrix1, int** matrix2, rows, cols) {
    int** mat = createMatrix(rows, cols);
    for(int i = 0; i < rows; i ++) {
        for(int j = 0; j < cols; j++) {
            
        }
    }
}

int main()
{
    int ** mat = createMatrix(2, 2);
    printMatrix(mat, 2, 2);
    
    insertValues2X2Matrix(2, 3, 4, 5, mat);
    printMatrix(mat, 2, 2);
    
    return 0;
}
