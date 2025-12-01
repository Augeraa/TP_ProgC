#include <stdio.h>

int chaines_egales(char a[], char b[]) {
    int i = 0;
    while (a[i] != '\0' || b[i] != '\0') {
        if (a[i] != b[i]) return 0;
        i++;
    }
    return 1;
}

int main() {
    char phrases[10][200] = {
        "Bonjour, comment ca va ?",
        "Le temps est magnifique aujourd'hui.",
        "C'est une belle journee.",
        "La programmation en C est amusante.",
        "Les tableaux en C sont puissants.",
        "Les pointeurs en C peuvent etre deroutants.",
        "Il fait beau dehors.",
        "La recherche dans un tableau est interessante.",
        "Les structures de donnees sont importantes.",
        "Programmer en C, c'est genial."
    };

    char recherche[200];
    printf("Entrez la phrase a chercher : ");
    fgets(recherche, 200, stdin);

    // Supprimer \n
    int i = 0;
    while (recherche[i] != '\0') {
        if (recherche[i] == '\n') recherche[i] = '\0';
        i++;
    }

    int trouve = 0;
    for (int j = 0; j < 10; j++) {
        if (chaines_egales(phrases[j], recherche)) {
            trouve = 1;
            break;
        }
    }

    if (trouve) printf("Phrase trouvée\n");
    else printf("Phrase non trouvée\n");

    return 0;
}

