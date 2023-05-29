#include <stdio.h>

void permuterPointeurs(int** ptr1, int** ptr2) {
    int* temp = *ptr1; // Utilisation d'une variable temporaire pour stocker la valeur du premier pointeur
    *ptr1 = *ptr2; // Le contenu du premier pointeur est mis à jour avec la valeur du deuxième pointeur
    *ptr2 = temp; // Le contenu du deuxième pointeur est mis à jour avec la valeur temporaire
}

int main() {
    int var1, var2;
    int* ptr1 = &var1; // Pointeur vers la première variable entière
    int* ptr2 = &var2; // Pointeur vers la deuxième variable entière
    
    printf("Entrez la valeur de la variable 1 : ");
    scanf("%d", &var1);
    
    printf("Entrez la valeur de la variable 2 : ");
    scanf("%d", &var2);
    
    printf("Avant la permutation :\n");
    printf("Variable 1 : %d\n", *ptr1);
    printf("Variable 2 : %d\n", *ptr2);
    
    permuterPointeurs(&ptr1, &ptr2);
    
    printf("Après la permutation :\n");
    printf("Variable 1 : %d\n", *ptr1);
    printf("Variable 2 : %d\n", *ptr2);
    
    return 0;
}
