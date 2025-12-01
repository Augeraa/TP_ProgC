#include <stdio.h>
#include <stdint.h>

int main() {
    char c = 'A';
    int i = 123;
    float f = 2.5;

    char *pc = &c;
    int *pi = &i;
    float *pf = &f;

    printf("Avant manipulation:\n");
    printf("Adresse de i: %p, Valeur: %x\n", pi, i);
    printf("Adresse de f: %p, Valeur: %x\n", pf, *(uint32_t*)&f);

    *pi = *pi - 1;
    uint32_t *fi = (uint32_t*)&f;
    *fi = *fi - 1;

    printf("Après manipulation:\n");
    printf("Adresse de i: %p, Valeur: %x\n", pi, i);
    printf("Adresse de f: %p, Valeur: %x\n", pf, *(uint32_t*)&f);

    return 0;
}
