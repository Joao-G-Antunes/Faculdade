#include <stdio.h>
#include "ponto.h"

int main () {
    Ponto* p1 = ponto_criar(1.0f, 2.0f);
    Ponto* p2 = ponto_criar(4.0f, 6.0f);

    if (p1 == NULL || p2 == NULL) {
        printf("Erro ao criar pontos.\n");
        return 1;
    }

    float distancia = distancia_entre_pontos(p1, p2);
    if (distancia < 0) {
        printf("Erro ao calcular a distancia entre os pontos.\n");
    } else {
        printf("Distancia entre os pontos: %.2f\n", distancia);
    }

    ponto_destruir(p1);
    ponto_destruir(p2);

    return 0;
}