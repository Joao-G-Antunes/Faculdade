#define _USE_MATH_DEFINES
#include <math.h>
#include <stdlib.h>
#include "ponto.h"

struct ponto {
    float x;
    float y;
};

Ponto* ponto_criar(float x, float y) {
    Ponto* p = (Ponto*)malloc(sizeof(Ponto));
    if (p != NULL) {
        p->x = x;
        p->y = y;
    }
    return p;
}

float distancia_entre_pontos(Ponto* p1, Ponto* p2) {
    if (p1 == NULL || p2 == NULL) {
        return -1.0f; // Indica erro
    }
    float dx = p2->x - p1->x;
    float dy = p2->y - p1->y;
    return sqrtf(dx * dx + dy * dy);
}

void ponto_destruir(Ponto* p) {
    free(p);
}