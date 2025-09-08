#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include "esfera.h"

Esfera* cria_esfera(float raio) {
    Esfera* e = (Esfera*) malloc(sizeof(Esfera));
    if (e != NULL) {
        e -> raio = raio;
    }
    return e;
}

float area_esfera(Esfera* e) {
    return 4 * M_PI * pow(e -> raio, 2);
}
float volume_esfera(Esfera* e) {
    return 4/3 * M_PI * pow(e -> raio, 3);
}
float raio_esfera(Esfera* e) {
    return e -> raio;
}
void libera_esfera(Esfera* e) {
    free(e);
}