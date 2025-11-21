#include <stdio.h>

int main() {
    int a = 16;
    int b = 3;

    // ----- Opérateurs arithmétiques -----
    printf("Addition : %d + %d = %d\n", a, b, a + b);
    printf("Soustraction : %d - %d = %d\n", a, b, a - b);
    printf("Multiplication : %d * %d = %d\n", a, b, a * b);
    printf("Division : %d / %d = %d\n", a, b, a / b);
    printf("Modulo : %d %% %d = %d\n\n", a, b, a % b);

    // ----- Opérateurs logiques / comparaisons -----
    printf("a == b : %d\n", (a == b));  // renvoie 0 (faux)
    printf("a > b : %d\n", (a > b));    // renvoie 1 (vrai)

    return 0;
}
