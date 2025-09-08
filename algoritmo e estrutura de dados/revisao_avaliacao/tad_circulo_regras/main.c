#include <stdio.h>
#include "circulo.h"

int main() {
    float r;
    scanf("%f", &r);

    Circ* c = circ_cria(r);
    if (c == NULL) {
        printf("Raio invalido\n");
        return 1;
    }

    printf("area=%.2f diam=%.2f\n", circ_area(c), circ_diam(c));
    circ_libera(c);     
    return 0;
}