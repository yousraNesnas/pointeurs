#include <stdio.h>
#include <stdlib.h>

#define ROWS 3
#define COLS 4

typedef struct {
    int* ptr;
} Matrix[ROWS][COLS];



void initialiserMatrice(Matrix mat) {
    int values[ROWS][COLS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            mat[i][j].ptr = &values[i][j];
        }
    }
}

void afficherMatrice(const Matrix mat) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", *(mat[i][j].ptr));
        }
        printf("\n");
    }
}

int main() {
    Matrix matrice;

    initialiserMatrice(matrice);
    afficherMatrice(matrice);

    return 0;
}
