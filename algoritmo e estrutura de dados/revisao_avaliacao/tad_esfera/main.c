#include <stdio.h>
#include "esfera.h"

int main () {
    Esfera* e = cria_esfera(3.0);
    printf("Raio: %.2f\n", raio_esfera(e));
    printf("Area: %.2f\n", area_esfera(e));
    printf("Volume: %.2f\n", volume_esfera(e));
    libera_esfera(e);
    return 0;
}