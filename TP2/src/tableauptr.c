#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int ti[11];
    float tf[11];

    srand(time(NULL));

    int *pi = ti;
    float *pf = tf;

    for (int i = 0; i < 11; i++) {
        *(pi + i) = rand() % 100;
        *(pf + i) = (float)(rand() % 100) / 3.0;
    }

    printf("Avant :\n");
    for (int i = 0; i < 11; i++) printf("%d ", *(pi + i));
    printf("\n");
    for (int i = 0; i < 11; i++) printf("%.2f ", *(pf + i));
    printf("\n");

    for (int i = 0; i < 11; i += 2) {
        *(pi + i) *= 3;
        *(pf + i) *= 3;
    }

    printf("Après :\n");
    for (int i = 0; i < 11; i++) printf("%d ", *(pi + i));
    printf("\n");
    for (int i = 0; i < 11; i++) printf("%.2f ", *(pf + i));
    printf("\n");

    return 0;
}
