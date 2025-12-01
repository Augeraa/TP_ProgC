#include <stdio.h>

int main() {
    char noms[5][50] = {"Dupont", "Martin", "Durand", "Leroy", "Bernard"};
    char prenoms[5][50] = {"Marie", "Paul", "Julie", "Luc", "Emma"};
    char adresses[5][100] = {
        "Adresse 1",
        "Adresse 2",
        "Adresse 3",
        "Adresse 4",
        "Adresse 5"
    };

    float noteC[5] = {16.5, 14.0, 12.5, 15.0, 11.0};
    float noteSE[5] = {12.0, 14.1, 13.2, 15.8, 9.7};

    for (int i = 0; i < 5; i++) {
        printf("Etudiant %d:\n", i+1);
        printf("Nom : %s\n", noms[i]);
        printf("Prenom : %s\n", prenoms[i]);
        printf("Adresse : %s\n", adresses[i]);
        printf("Note C : %.2f\n", noteC[i]);
        printf("Note SE : %.2f\n", noteSE[i]);
        printf("\n");
    }

    return 0;
}
