#include <stdio.h>

int main() {
    int compteur = 5;  // Modifier cette valeur pour tester (doit être < 10)

    if (compteur >= 10) {
        printf("Erreur : compteur doit être inférieur à 10.\n");
        return 1;
    }

    printf("Triangle avec boucles for :\n");

    for (int i = 1; i <= compteur; i++) {
        for (int j = 1; j <= i; j++) {
            if (i == 3 || i == 4) {
                printf("# ");
            } else {
                printf("* ");
            }
        }
        printf("\n");
    }

    return 0;
}
