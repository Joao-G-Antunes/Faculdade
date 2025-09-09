#define _USE_MATH_DEFINES   
#include <stdlib.h>
#include <math.h>
#include "triangulo.h"

struct tri {
    float a;
    float b;
    float c;
};

Triangulo* cria_triangulo(float a, float b, float c) {
    if (a <= 0 || b <= 0 || c <= 0) {
        return NULL;
    }
    Triangulo* t = (Triangulo*) malloc(sizeof(Triangulo));
    if (t != NULL) {
        t -> a = a;
        t -> b = b;
        t -> c = c;
    }

    return t;
}

float perimetro(Triangulo* t) {
    if(t == NULL) return -1.0f;

    return t -> a + t -> b + t -> c;
}
float area(Triangulo* t) {
    if(t == NULL) return -1.0f;

    float p = perimetro(t) / 2.0f;
    return sqrt(p * (p - t -> a) * (p - t -> b) * (p - t -> c));
}
int forma_triangulo(Triangulo* t) {
    if(t == NULL) return 0;

    if (t -> a + t -> b > t -> c && t -> a + t -> c > t -> b && t -> b + t -> c > t -> a) {
        if (t -> a == t -> b && t -> b == t -> c) {
            return 1; // Equilátero
        } else if (t -> a == t -> b || t -> a == t -> c || t -> b == t -> c) {
            return 2; // Isósceles
        } else {
            return 3; // Escaleno
        }
    } else {
        return 0; // Não forma um triângulo
    }
}
void libera(Triangulo* t) {
    free(t);
}