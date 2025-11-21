#include <stdio.h>

int main() {
    int n = 7;  // Nombre de termes à générer (modifier pour tester)
    int u0 = 0, u1 = 1;
    
    printf("Suite de Fibonacci jusqu'au terme U%d :\n", n);

    if (n >= 1) {
        printf("%d", u0);  // U0
    }

    if (n >= 2) {
        printf(", %d", u1);  // U1
    }

    int un;  // Terme courant
    for (int i = 2; i < n; i++) {
        un = u0 + u1;
        printf(", %d", un);
        u0 = u1;
        u1 = un;
    }

    printf("\n");

    return 0;
}
