#include <stdio.h>

int main() {
    int num1 = 12;       // Modifier pour tester
    int num2 = 4;        // Modifier pour tester
    char op = '&';       // Modifier pour tester : + - * / % & | ~

    printf("num1 = %d, num2 = %d, op = '%c'\n", num1, num2, op);

    switch (op) {
        case '+':
            printf("Résultat : %d\n", num1 + num2);
            break;

        case '-':
            printf("Résultat : %d\n", num1 - num2);
            break;

        case '*':
            printf("Résultat : %d\n", num1 * num2);
            break;

        case '/':
            if (num2 != 0)
                printf("Résultat : %d\n", num1 / num2);
            else
                printf("Erreur : division par zéro !\n");
            break;

        case '%':
            if (num2 != 0)
                printf("Résultat : %d\n", num1 % num2);
            else
                printf("Erreur : modulo par zéro !\n");
            break;

        case '&':   // ET bit à bit
            printf("Résultat : %d\n", num1 & num2);
            break;

        case '|':   // OU bit à bit
            printf("Résultat : %d\n", num1 | num2);
            break;

        case '~':   // NON bit à bit (unaire)
            printf("Résultat sur num1 : %d\n", ~num1);
            printf("Résultat sur num2 : %d\n", ~num2);
            break;

        default:
            printf("Erreur : opérateur non reconnu.\n");
    }

    return 0;
}


