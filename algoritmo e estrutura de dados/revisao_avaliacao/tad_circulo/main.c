#include <stdio.h>
#include "circulo.h"

int main () {
    Circulo* c = circ_cria(5.0);
    if (c == NULL) {
        printf("Eroo ao criar circulo\n");
        return 1;
    }

    printf("Area: %.2f\n", circ_area(c));
    printf("Diametro: %.2f\n", circ_diam(c));
    circ_libera(c);
    return 0;
}

