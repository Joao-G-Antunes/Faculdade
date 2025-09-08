#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include "circulo.h"

struct circ {
    float raio;
};

Circ* circ_cria(float r) {
    if (r < 0) return NULL;
    Circ* c = (Circ*) malloc(sizeof(Circ));
    if (c != NULL) {
        c -> raio = r;
    }
    return c;
}

float circ_area(const Circ* c) {
    if (c == NULL) return -1.0f;
    return (float) M_PI * c -> raio * c -> raio;
}

float circ_diam(const Circ* c) {
    if (c == NULL) return -1.0f;
    return 2 * c -> raio;
}

void circ_libera(Circ* c) {
    free(c);
}