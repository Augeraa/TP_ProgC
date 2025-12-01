#include <stdio.h>
#include <string.h>

struct Etudiant {
    char nom[50];
    char prenom[50];
    char adresse[100];
    float note1;
    float note2;
};

int main() {
    struct Etudiant e[5];

    strcpy(e[0].nom, "Dupont");
    strcpy(e[0].prenom, "Marie");
    strcpy(e[0].adresse, "Adresse 1");
    e[0].note1 = 16.5;
    e[0].note2 = 12.1;

    strcpy(e[1].nom, "Martin");
    strcpy(e[1].prenom, "Pierre");
    strcpy(e[1].adresse, "Adresse 2");
    e[1].note1 = 14.0;
    e[1].note2 = 14.1;

    // (tu peux remplir les 3 autres pareil)

    for (int i = 0; i < 2; i++) {
        printf("Etudiant %d:\n", i+1);
        printf("Nom : %s\n", e[i].nom);
        printf("Prenom : %s\n", e[i].prenom);
        printf("Adresse : %s\n", e[i].adresse);
        printf("Note 1 : %.2f\n", e[i].note1);
        printf("Note 2 : %.2f\n", e[i].note2);
        printf("\n");
    }

    return 0;
}
