#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tab[100];
    srand(time(NULL));

    // Génération d'un tableau trié
    tab[0] = rand() % 5;
    for (int i = 1; i < 100; i++) {
        tab[i] = tab[i - 1] + rand() % 5; // croissant
    }

    printf("Tableau trié :\n");
    for (int i = 0; i < 100; i++) printf("%d ", tab[i]);
    printf("\n");

    int x;
    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &x);

    // Recherche dichotomique
    int debut = 0, fin = 99, trouve = 0;

    while (debut <= fin) {
        int mid = (debut + fin) / 2;

        if (tab[mid] == x) {
            trouve = 1;
            break;
        } else if (tab[mid] < x) {
            debut = mid + 1;
        } else {
            fin = mid - 1;
        }
    }

    if (trouve) printf("entier present\n");
    else printf("entier absent\n");

    return 0;
}
