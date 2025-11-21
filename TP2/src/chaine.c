#include <stdio.h>

int main() {
    // Déclaration et initialisation des chaînes
    char str1[] = "Hello";
    char str2[] = " World!";
    char copie[100];       // Pour stocker la copie de str1
    char concatenation[200]; // Pour stocker la concaténation de str1 et str2

    // 1) Calculer la longueur de str1
    int longueur = 0;
    while (str1[longueur] != '\0') {
        longueur++;
    }
    printf("Longueur de str1 : %d\n", longueur);

    // 2) Copier str1 dans copie
    int i = 0;
    while (str1[i] != '\0') {
        copie[i] = str1[i];
        i++;
    }
    copie[i] = '\0'; // Terminer la chaîne avec '\0'
    printf("Copie de str1 : %s\n", copie);

    // 3) Concaténer str1 et str2 dans concatenation
    // Copier str1 dans concatenation
    i = 0;
    while (str1[i] != '\0') {
        concatenation[i] = str1[i];
        i++;
    }

    // Ajouter str2 à la suite
    int j = 0;
    while (str2[j] != '\0') {
        concatenation[i] = str2[j];
        i++;
        j++;
    }
    concatenation[i] = '\0'; // Terminer la chaîne
    printf("Concaténation de str1 et str2 : %s\n", concatenation);

    return 0;
}
