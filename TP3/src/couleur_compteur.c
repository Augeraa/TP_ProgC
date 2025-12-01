#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Couleur {
    unsigned char r, g, b, a;
};

struct Occurrence {
    struct Couleur c;
    int count;
};

int couleurs_egales(struct Couleur a, struct Couleur b) {
    return (a.r == b.r && a.g == b.g && a.b == b.b && a.a == b.a);
}

int main() {
    struct Couleur tab[100];
    struct Occurrence distinct[100];
    int distinct_count = 0;

    srand(time(NULL));

    // Remplissage aléatoire
    for (int i = 0; i < 100; i++) {
        tab[i].r = rand() % 256;
        tab[i].g = rand() % 256;
        tab[i].b = rand() % 256;
        tab[i].a = 255;
    }

    // Comptage
    for (int i = 0; i < 100; i++) {
        int found = 0;

        for (int j = 0; j < distinct_count; j++) {
            if (couleurs_egales(tab[i], distinct[j].c)) {
                distinct[j].count++;
                found = 1;
                break;
            }
        }

        if (!found) {
            distinct[distinct_count].c = tab[i];
            distinct[distinct_count].count = 1;
            distinct_count++;
        }
    }

    // Affichage
    for (int i = 0; i < distinct_count; i++) {
        printf("%02x %02x %02x %02x : %d\n",
               distinct[i].c.r,
               distinct[i].c.g,
               distinct[i].c.b,
               distinct[i].c.a,
               distinct[i].count);
    }

    return 0;
}
