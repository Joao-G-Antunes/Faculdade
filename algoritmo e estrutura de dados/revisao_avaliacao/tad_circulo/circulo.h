#ifndef CIRCULO_H
#define CIRCULO_H

typedef struct {
    float raio;
} Circulo;

Circulo* circ_cria (float raio);
float circ_area (Circulo* c);
float circ_diam (Circulo* c);
void circ_libera (Circulo* c);

#endif //CIRCULO_H