#ifndef PONTO_H
#define PONTO_H

typedef struct ponto Ponto;
Ponto* ponto_criar(float x, float y);
float distancia_entre_pontos(Ponto* p1, Ponto* p2);
void ponto_destruir(Ponto* p);
#endif //PONTO_H
