
#include <stdio.h>
#include <ctype.h>

void multiplyMatrixVector(int rows, int cols, int matrix[rows][cols], int vector[cols], int result[rows]) {
    for (int i = 0; i < rows; i++) {
        result[i] = 0;
        for (int j = 0; j < cols; j++) {
            result[i] += matrix[i][j] * vector[j];
        }
    }
}

void matrice() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int vector[3] = {1, 2, 3};
    int result[3];

    multiplyMatrixVector(3, 3, matrix, vector, result);

    printf("Résultat matrice × vecteur : ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", result[i]);
    }
}

