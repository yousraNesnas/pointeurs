#include <stdio.h>

#define SIZE 5

void trierTableau(const int* vect, int** ptrVect, int size) {
    // Initialisation du tableau de pointeurs
    for (int i = 0; i < size; i++) {
        ptrVect[i] = (int*)&vect[i];
    }

    // Tri du tableau de pointeurs (tri par sélection)
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (*ptrVect[j] < *ptrVect[minIndex]) {
                minIndex = j;
            }
        }
        // Échange des pointeurs
        int* temp = ptrVect[i];
        ptrVect[i] = ptrVect[minIndex];
        ptrVect[minIndex] = temp;
    }
}

void afficherTableau(const int** ptrVect, int size) {
    printf("Tableau trié :\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", **ptrVect);
        ptrVect++;
    }
    printf("\n");
}

int main() {
    int vect[SIZE] = {4, 2, 1, 5, 3};
    int* ptrVect[SIZE];

    printf("Tableau initial :\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", vect[i]);
    }
    printf("\n");

    trierTableau(vect, ptrVect, SIZE);
    afficherTableau((const int**)ptrVect, SIZE);

    return 0;
}
