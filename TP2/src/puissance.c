#include <stdio.h>

int main() {
    int a = 2;   // base
    int b = 3;   // exposant
    int resultat = 1;

    // Si b est négatif, on ne traite pas (exercice prévu pour des entiers)
    if (b < 0) {
        printf("Erreur : l'exposant ne doit pas être négatif.\n");
        return 1;
    }

    // Boucle de calcul : a^b
    for (int i = 0; i < b; i++) {
        resultat *= a;
    }

    printf("%d puissance %d = %d\n", a, b, resultat);

    return 0;
}
