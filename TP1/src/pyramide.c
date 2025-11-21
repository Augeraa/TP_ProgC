#include <stdio.h>

int main() {
    int n = 5;   // Hauteur de la pyramide
    int i, j;

    printf("Génération d'une pyramide de hauteur %d :\n\n", n);

    // Boucle principale : les niveaux de la pyramide
    for (i = 1; i <= n; i++) {

        // 1) Affichage des espaces pour centrer
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // 2) Nombres croissants : 1 -> i
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // 3) Nombres décroissants : i-1 -> 1
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        // Passage à la ligne suivante
        printf("\n");
    }

    printf("\nPyramide générée avec succès !\n");

    return 0;
}

