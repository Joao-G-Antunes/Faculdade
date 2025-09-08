#ifndef CIRCULO_H
#define CIRCULO_H

typedef struct circ Circ;
Circ* circ_cria(float r);
float circ_area(const Circ* c);
float circ_diam(const Circ* c);
void circ_libera(Circ* c);

#endif //CIRCULO_H