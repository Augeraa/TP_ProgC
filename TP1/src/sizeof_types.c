#include <stdio.h>

int main() {
    printf("Taille des types de base en octets :\n\n");

    // char
    printf("char : %zu octets\n", sizeof(char));
    printf("signed char : %zu octets\n", sizeof(signed char));
    printf("unsigned char : %zu octets\n\n", sizeof(unsigned char));

    // short
    printf("short : %zu octets\n", sizeof(short));
    printf("signed short : %zu octets\n", sizeof(signed short));
    printf("unsigned short : %zu octets\n\n", sizeof(unsigned short));

    // int
    printf("int : %zu octets\n", sizeof(int));
    printf("signed int : %zu octets\n", sizeof(signed int));
    printf("unsigned int : %zu octets\n\n", sizeof(unsigned int));

    // long int
    printf("long int : %zu octets\n", sizeof(long int));
    printf("signed long int : %zu octets\n", sizeof(signed long int));
    printf("unsigned long int : %zu octets\n\n", sizeof(unsigned long int));

    // long long int
    printf("long long int : %zu octets\n", sizeof(long long int));
    printf("signed long long int : %zu octets\n", sizeof(signed long long int));
    printf("unsigned long long int : %zu octets\n\n", sizeof(unsigned long long int));

    // float
    printf("float : %zu octets\n\n", sizeof(float));

    // double
    printf("double : %zu octets\n\n", sizeof(double));

    // long double
    printf("long double : %zu octets\n\n", sizeof(long double));

    return 0;
}
