#include <stdio.h>
#include "cilindro.h"

int main() {
    Cilindro* c = cria_cilindro(3.0, 5.0);
    printf("Raio: %.2f\n", cil_raio(c));
    printf("Volume: %.2f\n", cil_vol(c));
    printf("Area: %.2f\n", cil_area(c));

    if (c != NULL) {
        libera_cil(c);
    }
    
    libera_cil(c);
    return 0;
}