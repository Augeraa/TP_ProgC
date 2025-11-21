#include <stdio.h>

void afficherBinaire(int n) {
    // Un int a généralement 32 bits
    printf("%d en binaire = ", n);

    // Cas particulier : n = 0
    if (n == 0) {
        printf("0\n");
        return;
    }

    // On affiche bit par bit depuis le plus significatif (bit 31) jusqu’au bit 0
    int printed = 0;
    for (int i = 31; i >= 0; i--) {
        int bit = (n >> i) & 1;  // extrait le bit i
        if (bit == 1) printed = 1;
        if (printed) printf("%d", bit);
    }
    printf("\n");
}

int main() {

    int valeurs[] = {0, 4096, 65536, 65535, 1024};
    int taille = sizeof(valeurs) / sizeof(valeurs[0]);

    for (int i = 0; i < taille; i++) {
        afficherBinaire(valeurs[i]);
    }

    return 0;
}
