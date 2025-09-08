#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include "cilindro.h"

Cilindro* cria_cilindro(float raio, float altura) {
    Cilindro* c = (Cilindro*) malloc(sizeof(Cilindro));
    if (c != NULL) {
        c -> raio = raio;
        c -> altura = altura;
    }    
    return c;    
}

float cil_area(Cilindro* c) {
    return 2 * M_PI * c -> raio * (c -> altura + c -> raio);
}

float cil_vol(Cilindro* c) {
    return M_PI * pow(c -> raio, 2) * c -> altura;
}

float cil_raio(Cilindro* c) {
    return c -> raio;
}

void  libera_cil(Cilindro* c) {
    return free(c);
}