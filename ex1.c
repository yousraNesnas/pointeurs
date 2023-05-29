#include <stdio.h> 

int main() {
    int t[5];                // Déclaration du tableau t de taille 5
    int *p1;                 // Déclaration d'un pointeur p1
    int **p2;                // Déclaration d'un pointeur de pointeur p2
    int *pt[2];              // Déclaration d'un tableau de pointeurs pt de taille 2

    // Code pour initialiser t par les valeurs 1 à 5
    for (int i = 0; i < 5; i++) {
        t[i] = i + 1;
    }

    p1 = &t[2];              // p1 pointe vers l'élément t[2]
    p2 = &p1;                // p2 pointe vers p1
    pt[0] = &t[3];           // pt[0] pointe vers l'élément t[3]

    (*p2)++;                 // (*p2) ← (*p2) + 1; Incrémente la valeur de p1
    **p2 = 5;                // **p2 = 5; Affecte la valeur 5 à t[2]

    pt[1] = t + 1;           // pt[1] pointe vers l'élément t[1]

    (*p1)++;                 // (*p1) ← (*p1) + 1; Incrémente la valeur de t[2]

    t[t[t[2]] - 2] = t[t[t[2]] - 2] + 1; // Accès à des éléments du tableau t pour modification

    *pt[1] = *(pt[0] + 1);   // Affecte la valeur de t[4] à t[1]

    *(pt[1] - 1) = 2 * *(*p2 - 1); // Affecte le double de t[1] à t[0]

    // Affichage du tableau t modifié
    for (int i = 0; i < 5; i++) {
        printf("%d ", t[i]);
    }
    printf("\n");

    return 0;
}
