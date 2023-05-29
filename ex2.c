#include <stdio.h>

int somme(int* T, int n) {
    int somme = 0;
    int* p = T; // Pointeur pour parcourir le tableau
    
    for (int i = 0; i < n; i++) {
        somme += *p; // Ajoute la valeur pointée par le pointeur à la somme
        p++; // Déplace le pointeur vers le prochain élément du tableau
    }
    
    return somme;
}

int main() {
    int n;
    printf("Entrez la taille du vecteur : ");
    scanf("%d", &n);
    
    int T[n];
    
    printf("Entrez les elements du vecteur :\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &T[i]);
    }
    
    int S = somme(T, n);
    printf("La somme des elements du vecteur est : %d\n", S);
    
    return 0;
}
