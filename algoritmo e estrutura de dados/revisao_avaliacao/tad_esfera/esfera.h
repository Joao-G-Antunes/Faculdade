#ifndef ESFERA_H
#define ESFERA_H

typedef struct {
    float raio;
} Esfera;

Esfera* cria_esfera(float raio);
float area_esfera(Esfera* e);
float volume_esfera(Esfera* e);
float raio_esfera(Esfera* e);
void libera_esfera(Esfera* e);

#endif  //ESFERA_H