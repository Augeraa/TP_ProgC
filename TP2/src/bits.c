#include <stdio.h>

int main() {
    int d = 0x10001000;  // Modifier ici pour tester d'autres valeurs

    // Indices des bits (compte depuis la gauche, bit 31 = MSB)
    int bit4  = 31 - 3;   // 4e bit de gauche → bit 28
    int bit20 = 31 - 19;  // 20e bit de gauche → bit 12

    // Extraction des bits
    int b4  = (d >> bit4) & 1;
    int b20 = (d >> bit20) & 1;

    // Vérification
    if (b4 == 1 && b20 == 1) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}
