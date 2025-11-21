#include <stdio.h>

int main() {
    // --- char ---
    char c = 'A';
    signed char sc = -50;
    unsigned char uc = 200;

    // --- short ---
    short s = 123;
    signed short ss = -123;
    unsigned short us = 456;

    // --- int ---
    int i = 1000;
    signed int si = -1000;
    unsigned int ui = 2000;

    // --- long int ---
    long int li = 123456L;
    signed long int sli = -123456L;
    unsigned long int uli = 123456UL;

    // --- long long int ---
    long long int lli = 123456789LL;
    signed long long int slli = -123456789LL;
    unsigned long long int ulli = 123456789ULL;

    // --- float ---
    float f = 3.14f;

    // --- double ---
    double d = 2.71828;

    // --- long double ---
    long double ld = 1.6180339887L;

    // ----- AFFICHAGE -----
    printf("=== char ===\n");
    printf("char : %c (%d)\n", c, c);
    printf("signed char : %d\n", sc);
    printf("unsigned char : %u\n\n", uc);

    printf("=== short ===\n");
    printf("short : %d\n", s);
    printf("signed short : %d\n", ss);
    printf("unsigned short : %u\n\n", us);

    printf("=== int ===\n");
    printf("int : %d\n", i);
    printf("signed int : %d\n", si);
    printf("unsigned int : %u\n\n", ui);

    printf("=== long int ===\n");
    printf("long int : %ld\n", li);
    printf("signed long int : %ld\n", sli);
    printf("unsigned long int : %lu\n\n", uli);

    printf("=== long long int ===\n");
    printf("long long int : %lld\n", lli);
    printf("signed long long int : %lld\n", slli);
    printf("unsigned long long int : %llu\n\n", ulli);

    printf("=== float ===\n");
    printf("float : %f\n\n", f);

    printf("=== double ===\n");
    printf("double : %lf\n\n", d);

    printf("=== long double ===\n");
    printf("long double : %Lf\n\n", ld);

    return 0;
}
