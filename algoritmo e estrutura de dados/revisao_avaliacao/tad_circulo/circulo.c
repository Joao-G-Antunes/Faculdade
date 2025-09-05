#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h> 
#include "circulo.h"

Circulo* circ_cria (float raio) {
    Circulo* c = (Circulo*) malloc(sizeof(Circulo));
    if (c != NULL) {
        c -> raio = raio;
    }
    return c;
}

float circ_area (Circulo* c) {
    return M_PI * pow(c -> raio, 2 );
}

float circ_diam (Circulo* c) {
    return 2 * c -> raio;
}

void circ_libera (Circulo* c) {
    free(c);
}