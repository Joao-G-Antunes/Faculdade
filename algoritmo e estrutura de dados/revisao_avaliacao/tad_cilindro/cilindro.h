#ifndef CILINDRO_H
#define CILINDRO_H

typedef struct {
    float raio;
    float altura;
} Cilindro;

Cilindro* cria_cilindro(float raio, float altura);
float cil_area(Cilindro* c);
float cil_raio(Cilindro* c);
float cil_vol(Cilindro* c);
void libera_cil(Cilindro* c);

#endif //CILINDRO_H