#include <stdlib.h>
#include <math.h>
#include "triangulo.h"

Triangulo* tri_cria(float base, float altura) {
    Triangulo* t = (Triangulo*) malloc(sizeof(Triangulo));
    if (t != NULL){
        t -> base = base;
        t -> altura = altura;
    }
    return t;
}

float tri_area(Triangulo* t) {
    return (t -> base * t -> altura)/2;
}

float tri_hip(Triangulo* t) {
    return sqrt(pow(t -> base, 2) + pow(t -> altura, 2));
}

void tri_libera(Triangulo* t) {
    free(t);
}
